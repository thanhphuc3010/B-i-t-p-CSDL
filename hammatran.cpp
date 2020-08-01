#include<stdio.h>
#include<conio.h>
//KHAI BAO HAM NHAP MA TRAN
void nhapMatran(int A[10][10], int &n, int &m)
{
    printf("Nhap vao so dong cua ma tran :\t");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran :\t");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            printf("\nNhap vao phan tu dong %d cot %d la: ",i,j);
            scanf("%d",&A[i][j]);
        }
}

//KHAI BAO HAM IN RA MA TRA
void xuatMatran(int A[10][10], int n, int m)
{
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            printf("%5d",A[i][j]);
            printf("\n");
        }
}

//HAM CHINH
int main()
{
int A[10][10],B[10][10];
int m,n;

//NHAP VA IN RA MA TRAN A
nhapMatran(A,n,m);
printf("Ma tran A la:\n");
xuatMatran(A,n,m);
//NHAP VA IN RA MA TRAN B
nhapMatran(B,n,m);
printf("Ma tran B la:\n");
xuatMatran(B,n,m);
getch();
}
