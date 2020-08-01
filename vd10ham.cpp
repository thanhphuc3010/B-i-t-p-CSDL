#include<stdio.h>
#include<conio.h>

void Nhap(char hoten[1000][30],char dv[1000][30],int ns[30],float tl[1000],float tt[1000],int n)
    {
    int i;
    for(i=1; i<=n;i++)
        {
        printf("\nMoi ban nhap vao thong tin cua can bo thu %d:",i);
        fflush(stdin);
        printf("\nMoi ban nhap vao ho ten cua can bo:");
        gets(hoten[i]);
        printf("\nMoi ban nhap vao don vi cua can bo:");
        gets(dv[i]);
        printf("\nMoi ban nhap vao nam sinh cua can bo:");
        scanf("%d",&ns[i]);
        printf("\nMoi ban nhap vao tien luong cua can bo:");
        scanf("%f",&tl[i]);
        printf("\nMoi ban nhap vao tien thuong cua can bo:");
        scanf("%f",&tt[i]);
        }
    }

float tinhtoan(float tl[1000], float tt[1000], float tn[1000],int n)
    {
        int i;
        for (i=1; i<=n;i++)
        tn[i]=tl[i]+tt[i];
        return tn[i];
    }


void Xuat(char hoten[1000][30],char dv[1000][30],int ns[30],float tl[1000],float tt[1000],float tn[1000],int n)
{


        printf("Bang quan ly thu nhap cua can bo la\n");
        printf("------------------------------------------------------------------------------------\n");
        printf("|%-3s|%-20s|%-30s|%-10s|%-10s|\n","STT","Ho va ten","Don vi cong tac","Nam sinh","Thu nhap");
        printf("------------------------------------------------------------------------------------\n");
    for(int i=1;i<=n;i++)
        {
        printf("|%-3d|%-20s|%-30s|%-10d|%-10.2f|\n",i,hoten[i],dv[i],ns[i],tn[i]);
        printf("------------------------------------------------------------------------------------\n");
        }
}
int main()
{
    int ns[1000];
    char hoten[1000][30];
    char dv[1000][30];
    float tl[1000], tt[1000], tn[1000];
    int n,i;
    printf("\nMoi ban nhap vao so can bo:");
    scanf("%d",&n);
    Nhap(hoten,dv,ns,tl,tt,n);
    tinhtoan(tl,tt,tn,n);
    Xuat(hoten,dv,ns,tl,tt,tn,n);
    getch();
}
