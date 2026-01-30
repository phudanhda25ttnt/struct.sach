#include<stdio.h>
struct SACH{
	char masach[20];
	char tieude[100];
	char tacgia[50] ;
	int namxuatban;
	char nhaxuatban[100] ;
	int sotrang ;
	char loaisach[50];
	long long giaban;
};
typedef struct SACH S;
	void nhapSACH(S *a);//Truyen tham bien
	void xuatSACH(S a);//Truyen tham tri
	void nhapquyen(S a[], int n);
	void xuatquyen(S a[], int n);

int main (){
    int n;
    S a[100];
    FILE *fp;

    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++) {
        printf("\nNhap sach thu %d\n", i + 1);
        nhapSACH(&a[i]);
    }

    fp = fopen("sach.out", "wb");
    if(fp == NULL) {
        printf("Khong mo duoc file\n");
        return 0;
    }

    fwrite(a, sizeof(S), n, fp);
    fclose(fp);

    printf("\nGhi file thanh cong!\n");

    return 0;
}
void xuatSACH(S a)
{
	printf("\n%s\t%s\t%s\t%d\t%s\t%d\t%lld\t%s", a.masach, a.tieude, a.tacgia, a.namxuatban, a.nhaxuatban, a.sotrang, a.giaban, a.loaisach);
}


//Ham nhap thong tin 1 sinh vien
void nhapSACH(S *a)
{
	printf("\nHay nhap ma sach: ");
	fflush(stdin);
	scanf("%s", a->masach);
	printf("\nHay nhap tieu de: ");
	fflush(stdin);
	gets(a->tieude);
	printf("\nHay nhap tac gia: ");
	fflush(stdin);
	gets(a->tacgia);
	printf("\nHay nhap nam xuat ban: ");
	fflush(stdin);
	scanf("%d" , &a->namxuatban);
	printf("\nHay nhap nha xuat ban: ");
	fflush(stdin);
	gets(a->nhaxuatban);
	printf("\nHay nhap so trang: ");
	fflush(stdin);
	scanf("%d", &a->sotrang);
	printf("\nHay nhap gia ban: ");
	fflush(stdin);
	scanf("%lld", &a->giaban);
	printf("\nHay nhap loai sach: ");
	fflush(stdin);
	gets(a->loaisach);
}