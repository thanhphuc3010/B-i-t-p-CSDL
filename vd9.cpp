#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a, st[20],*p;
    printf("\nNhap vao mot chuoi:");
    gets(st);
    printf("\nNhap vao ky tu can tim:");
    scanf("%c",&a);
    printf("Chuoi duoc bat dau tai dia chi la:%u",st);
    p=strchr(st,a);
    printf("\nDia cho cua ky tu can tim xuat hien dau tien la:%u",p);
    printf("\nVi tri dau tien cua ky tu can tim la: %d",(p-st)+1);
    getch();


}
