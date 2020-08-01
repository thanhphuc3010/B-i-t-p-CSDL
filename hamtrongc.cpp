#include<stdio.h>
#include<conio.h>
int gt(int a)
{
    int T=1;
    if(a==0||a==1)
        T=1;
    else
        {
        for(int i=2;i<=a;i++)
        T=T*i;
        }
    return T;
}
int main()
{
    int n,k;
    int th;
    printf("nhap vao k:\t");
    scanf("%d",&k);
    printf("nhap vao n:\t");
    scanf("%d",&n);
    gt(n);
    gt(k);
    gt(n-k);
    th=gt(n)/(gt(k)*gt(n-k));
    printf("To hop chap k cua n phan tu la: %d",th);
    getch();
}
