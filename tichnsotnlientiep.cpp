#include<stdio.h>
#include<conio.h>
int main()
{
    int s=1,n,i=0;
    printf("Nhap n:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s*i;
    printf("tich cua n so lien tiep la:%d",s);
    getch();

}
