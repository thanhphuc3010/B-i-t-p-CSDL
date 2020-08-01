#include<stdio.h>
#include<conio.h>
int main()
{
    float hh,dt;
    char HT[30];

    printf("\nmoi ban nhap vao ho ten cua nhan vien\t");
    gets(HT);
    printf("\nnhap vao doanh thu cua nhan vien\t");
    scanf("%f",&dt);
    if (dt>10)
        hh=dt*0.1;
    else hh=dt*0.05;
    printf("\ntien hoa hong cua nhan vien la: %f\t",hh);
    getch();
}
