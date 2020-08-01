#include<stdio.h>
#include<conio.h>
int main()
{
    //Khai báo các biến, mảng
    int ns[1000];
    char hoten[1000][30];
    char dv[1000][100];
    float tl[1000], tt[1000], tn[1000];
    int n,i;

    //Nhập thông tin cán bộ
    printf("\nMoi ban nhap vao so can bo:");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
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
        tn[i]=tl[i]+tt[i];
        printf("\nThu nhap cua can bo thu %d la:%f",i,tn[i]);
        printf("\n");
        }
        //In thông tin của cán bộ
        printf("Bang quan ly thu nhap cua can bo la\n");
        printf("------------------------------------------------------------------------------------\n");
        printf("|%-3s|%-20s|%-30s|%-10s|%-10s|\n","STT","Ho va ten","Don vi cong tac","Nam sinh","Thu nhap");
        printf("------------------------------------------------------------------------------------\n");
    for(int i=1;i<=n;i++)
        {
        printf("|%-3d|%-20s|%-30s|%-10d|%-10.2f|\n",i,hoten[i],dv[i],ns[i],tn[i]);
        printf("------------------------------------------------------------------------------------\n");
        }
        getch();
}
