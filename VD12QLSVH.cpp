#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
struct Hoten
{
    char hodem[20];
    char ten[10];
};

struct Sinhvien
{
    int msv;
    float dcc,dkt,dt,dtk;
    struct Hoten ht;
};

void nhapdl(struct Sinhvien SV[],int n)
{
    int i;
    for ( int i=1; i<=n;i++)
    {
        printf("Nhap vao thong tin sinh vien thu %d:\n",i);
        fflush(stdin);
        printf("Moi ban nhap vao ho dem cua sinh vien:\n");
        gets(SV[i].ht.hodem);
        fflush(stdin);
        printf("Moi ban nhap vao ten cua sinh vien:\n");
        gets(SV[i].ht.ten);
        fflush(stdin);
        printf("Moi ban nhap vao ma sinh vien cua sinh vien:\n");
        scanf("%d",&SV[i].msv);
        printf("Moi ban nhap vao diem chuyen can cua sinh vien:\n");
        scanf("%f",&SV[i].dcc);
        printf("Moi ban nhap vao diem kiem tra cua sinh vien:\n");
        scanf("%f",&SV[i].dkt);
        printf("Moi ban nhap vao diem thi cua sinh vien:\n");
        scanf("%f",&SV[i].dt);
    }

}
float tinhtoan(Sinhvien B[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    B[i].dtk= B[i].dcc*0.1+B[i].dt*0.7+B[i].dkt*0.2;
    return B[i].dtk;
}
void xuatdl(Sinhvien SV[],int n)
{
    printf("\n\n                 BANG KET QUA HOC TAP CUA TUNG SINH VIEN\n");
    printf("============================================================================================\n");
    printf("|%-3s|%-15s|%-10s|%-15s|%-10s|%-10s|%-10s|%-10s|\n","STT","Ho dem","Ten","Ma Sv","Diem cc","Diem kt","Diem thi","Diem tk");
    printf("============================================================================================\n");
    int i;
    for(i=1;i<=n;i++)
    {
    printf("|%-3d|%-15s|%-10s|%-15d|%-10.2f|%-10.2f|%-10.2f|%-10.2f|\n",i,SV[i].ht.hodem,SV[i].ht.ten,SV[i].msv,SV[i].dcc,SV[i].dkt,SV[i].dt,SV[i].dtk);
    printf("============================================================================================\n");
    }
}
void sapxep(Sinhvien C[],int n)
{
    int i,j;
    struct Sinhvien tg;
    for (i=1;i<=n-1;i++)
        for (j=i+1;j<=n;j++)
            if (C[i].dtk <C[j].dtk)
            {
            tg=C[i];
            C[i]=C[j];
            C[j]=tg;
            }

}
void sapxepp(Sinhvien C[],int n)
{
    int i,j;
    struct Sinhvien t;
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
    {
     if (strcmp(C[i].ht.ten,C[j].ht.ten) > 0)
        {
        t=C[i];
        C[i]=C[j];
        C[j]=t;
        }
    }
}
int main()
{
    struct Sinhvien SV[30];
    int i,n;
    printf("Moi ban nhap vao so sinh vien:");
    scanf("%d",&n);
    nhapdl(SV,n);
    tinhtoan(SV,n);
    xuatdl(SV,n);
    sapxepp(SV,n);
    xuatdl(SV,n);
    getch();
}
