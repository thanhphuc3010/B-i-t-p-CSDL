#include<stdio.h>
#include<conio.h>
int main()
{
    //Khai bao
    int s=0,n,i=0;
    //Nhap lieu
    printf("Nhap n:\t");
    scanf("%d",&n);
    //
    if(n%2==0)
    {
        for(i=0;i<=n;i=i+2)
        s=s+i;
        printf("Tong cua n so chan lien tiep la %d",s);
    }
    else
    {
        for(i=1;i<=n;i=i+2)
        s=s+i;
        printf("Tong cua n so le lien tiep la %d",s);

    }
    getch();

}
