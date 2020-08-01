#include<stdio.h>
#include<conio.h>
    int main()
{
    int m,n,i,j;
    //nhap thong tin
    printf("\nNhap vao gia tri cua m:\t");
    scanf("%d",&m);
    printf("\nNhap vao gia tri cua n:\t");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        printf("%5d",j);
        printf("\n");
    }
    getch();
}
