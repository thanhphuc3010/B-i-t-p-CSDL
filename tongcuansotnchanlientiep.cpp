#include<stdio.h>
#include<conio.h>
int main()
{
    int s=0,n,i=0;
    printf("Nhap vo so chan n:");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2)
    s=s+i;
    printf("Tong cua n so chan lien tiep la %d",s);
    getch();

}
