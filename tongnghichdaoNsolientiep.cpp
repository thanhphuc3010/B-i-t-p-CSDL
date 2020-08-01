#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0;
    float sum=0;
    printf("nhap so tu nhien n:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+(1.0/i);
    printf("tong la:%f",sum);
    getch();

}
