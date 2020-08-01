#include<stdio.h>
#include<conio.h>
int main()
{

struct Hoten
{
    char Hodem[20];
    char Ten[10];
};
struct Sinhvien
{
    int MSV;
    float cc,kt,dt,dtk;
    struct Hoten HT;
};
int n;
struct Sinhvien SV[20];
printf("Moi ban nhap vao so sinh vien:");
scanf("%d",&n);
for ( int i=1; i<=n;i++)
{
    printf("Nhap vao thong tin sinh vien thu %d:\n",i);
    fflush(stdin);
    printf("Moi ban nhap vao ho dem cua sinh vien:\n");
    gets(SV[i].HT.Hodem);
    fflush(stdin);
    printf("Moi ban nhap vao ten cua sinh vien:\n");
    gets(SV[i].HT.Ten);
    printf("Moi ban nhap vao ma sinh vien cua sinh vien:\n");
    scanf("%d",&SV[i].MSV);
    printf("Moi ban nhap vao diem chuyen can cua sinh vien:\n");
    scanf("%f",&SV[i].cc);
    printf("Moi ban nhap vao diem kiem tra cua sinh vien:\n");
    scanf("%f",&SV[i].kt);
    printf("Moi ban nhap vao diem thi cua sinh vien:\n");
    scanf("%f",&SV[i].dt);
    SV[i].dtk=(SV[i].cc*0.1)+(SV[i].kt*0.2)+(SV[i].dt*0.7);
}
    printf("\n\n                         BANG THONG TIN CUA TUNG SINH VIEN \n");
    printf("======================================================================================================= \n");
    printf("|%-3s|%-15s|%-10s|%-15s|%-10s|%-10s|%-10s|%-10s|\n","STT","Ho dem","Ten","Ma Sv","Diem cc","Diem kt","Diem thi","Diem tk");
    printf("======================================================================================================= \n");

for ( int i=1; i<=n;i++)
{
        printf("|%-3d|%-15s|%-10s|%-15d|%-10.2f|%-10.2f|%-10.2f|%-10.2f|\n",i,SV[i].HT.Hodem,SV[i].HT.Ten,SV[i].MSV,SV[i].cc,SV[i].kt,SV[i].dt,SV[i].dtk);
    printf("======================================================================================================= \n");

}
getch();
}
