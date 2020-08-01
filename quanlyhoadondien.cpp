#include <stdio.h>
#include <conio.h>
#include <string.h>
struct khachhang
{
    char hoten[30];
    char diachi[50];
    float csdh9, csdh10, cstt,stpt;
};
void nhaplieu(khachhang A[], int n)
{
int i;
for(i=1;i<=n;i++)
    {
    printf("Moi ban nhap vao thong tin cua khach hang thu %d\n",i);
    fflush(stdin);
    printf("Moi ban nhap vao ho ten cua khach hang:");
    gets(A[i].hoten);
    fflush(stdin);
    printf("Moi ban nhap vao dia chi cua khach hang:");
    gets(A[i].diachi);
    printf("Moi ban nhap vao chi so dong ho thang 9:");
    scanf("%f",&A[i].csdh9);
    printf("Moi ban nhap vao chi so dong ho thang 10:");
    scanf("%f",&A[i].csdh10);
    printf("\n");
    }
}
void tinh(khachhang A[], int n)
{
    for(int i=1;i<=n;i++)
    {
    A[i].cstt= A[i].csdh10-A[i].csdh9;
    A[i].stpt= A[i].cstt*8000;
    }
}
float tinhtong(khachhang A[], int n)
{
    int i;
    float S=0;
    for (i=1;i<=n;i++)
    S=S+A[i].stpt;
    //printf("Tong so tien ma nha san xuat thu duoc trong thang 10 la: %.2f",S);
    return S;
}
void tinhmax(khachhang A[], int n)
{
    float max;
    max=A[1].cstt;
    for(int i=1;i<=n;i++)
        if(max<A[i].cstt)
        max= A[i].cstt;
    printf("\nNhung khach hang co chi so tieu thu lon nhat la:");
    for(int i=1;i<=n;i++)
        if(A[i].cstt==max)
    {
        printf("\n%s",A[i].hoten);
        printf("\t%f",A[i].cstt);
    }
}
void sapxep(khachhang A[], int n)
{
    int i,j;
    struct khachhang tg;
    for(i=1;i<=n-1;i++)
     for(j=i+1;j<=n;j++)
        if (A[i].cstt>A[j].cstt)
        {
         tg=A[i];
         A[i]=A[j];
         A[j]=tg;
        }
}
void xuat(khachhang A[],int n)
{
    int i;
    printf("\n\n       BANG THONG TIN KHACH HANG\n");
    printf("========================================================================\n");
    printf("|%-3s|%-30s|%-10s|%-10s|\n","STT","Ho ten khach hang","CSTT","So tien");
    printf("========================================================================\n");
    for(i=1;i<=n;i++)
    {
    printf("|%-3d|%-30s|%-10.2f|%-10.2f|\n",i,A[i].hoten,A[i].cstt,A[i].stpt);
    printf("========================================================================\n");
    }
    printf("|%-45s|%-10.2f|\n","Tong",tinhtong(A,n));

}
int main()
{
    int i,n;
    struct khachhang kh[1000];
    printf("Moi ban nhap vao so khach hang:");
    scanf("%d",&n);
    nhaplieu(kh,n);
    tinh(kh,n);
    tinhtong(kh,n);
    printf("\n");
    tinhmax(kh,n);
    sapxep(kh,n);
    xuat(kh,n);
    getch();
}
