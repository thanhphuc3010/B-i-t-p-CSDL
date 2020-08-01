#include<stdio.h>
#include<conio.h>
int main()
{
    float hh,dt;
    char HT[30];
    char lsp;

    printf("\nMoi ban nhap vao ho ten cua nhan vien\t");
    gets(HT);

    printf("\nNhap vao doanh thu cua nhan vien\t");
    scanf("%f",&dt);
    fflush(stdin);
    printf("\nNhap vao loai san pham ma nhan vien ban\t");
    scanf("%c",&lsp);

    if (dt>10)
        if (lsp =='A')
            hh=dt*0.1;
        else
            hh=dt*0.08;
    else
            hh=dt*0.05;
    printf("\nTien hoa hong cua nhan vien la: %4.2f\t",hh);
    getch();
}
