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
int main (){
 S a[100];
    int n;

    docSACH(a, &n);   // ✅ gọi hàm đọc file

    for(int i = 0; i < n; i++) {
        xuatSACH(a[i]);
    }

	return 0 ;
}
void docSACH(S a[], int *n) {
    FILE *fp = fopen("sach.out", "rb");
    if(fp == NULL) {
        *n = 0;
        return;
    }

    *n = fread(a, sizeof(S), 100, fp);
    fclose(fp);
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