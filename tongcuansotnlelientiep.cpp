#include<stdio.h>
#include<conio.h>
int main()
{
    int s=0,n,i=0;
    printf("Nhap vo so le n:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    s=s+i;
    printf("Tong cua n so le lien tiep la %d",s);
    getch();

}
