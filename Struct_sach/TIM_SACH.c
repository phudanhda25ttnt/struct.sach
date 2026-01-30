#include <stdio.h>
#include <string.h>

struct SACH {
    char masach[21];
    char tieude[100];
    char tacgia[50];
    int namxuatban;
    long long giaban;
    int sotrang;
    char nhaxuatban[100];
    char loaisach[50];
};
typedef struct SACH S;

void xuat1sach(S a);
void xuatnsach(S a[], int n);
void timsach(S a[], int n, char masach[]);

int main() {
    S a[100];
    int n;
    FILE *fp;
    char ms[21];

    fp = fopen("sach.out", "rb");
    if(fp == NULL){
        printf("Khong mo duoc file!\n");
        return 0;
    }

    fseek(fp, 0, SEEK_END);
    n = ftell(fp) / sizeof(S);
    rewind(fp);

    fread(a, sizeof(S), n, fp);
    fclose(fp);

    printf("\n===== DANH SACH SACH =====\n");
    xuatnsach(a, n);

    printf("\nNhap ma sach can tim: ");
    scanf("%s", ms);
    timsach(a, n, ms);

    return 0;
}

void xuatnsach(S a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nSach thu %d:\n", i + 1);
        xuat1sach(a[i]);
    }
}

void xuat1sach(S a) {
    printf("Ma sach: %s\n", a.masach);
    printf("Tieu de: %s\n", a.tieude);
    printf("Tac gia: %s\n", a.tacgia);
    printf("Nam xuat ban: %d\n", a.namxuatban);
    printf("Gia ban: %lld\n", a.giaban);
    printf("So trang: %d\n", a.sotrang);
    printf("Nha xuat ban: %s\n", a.nhaxuatban);
    printf("Loai sach: %s\n", a.loaisach);
}

void timsach(S a[], int n, char masach[]) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(strcmp(a[i].masach, masach) == 0) {
            printf("\n=== TIM THAY SACH ===\n");
            xuat1sach(a[i]);
            found = 1;
        }
    }
    if(!found) {
        printf("\nKhong tim thay sach co ma \"%s\"\n", masach);
    }
}