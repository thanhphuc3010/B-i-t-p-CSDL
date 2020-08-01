#include<stdio.h>
#include<conio.h>
struct canbo
{
  char ht[25];
  char dv[20];
  int  ns;
  float tl,tt,tn;

};

void nhapdl(canbo A[1000],int n)
{
 int i;
 for (i=1;i<=n;i++)
    {
    printf("\nNhap vao thong tin cua can bo thu %d:\n",i);
    fflush(stdin);
    printf("\nHo ten can bo: ");gets(A[i].ht);
    printf("\nDon vi cong tac: ");gets(A[i].dv);
    printf("\nNam sinh : ");scanf("%d",&A[i].ns);
    printf("\nTien luong: ");scanf("%f",&A[i].tl);
    printf("\nTien thuong: ");scanf("%f",&A[i].tt);
    }
}
void tinhthunhap(canbo B[1000],int n)
{
int i;
for (i=1;i<=n;i++)
 B[i].tn=B[i].tl+B[i].tt;
}
void xuatdl(canbo A[1000], int n)
{
 int i;
    printf("\n\n BANG THONG TIN CUA TUNG CAN BO \n");
    printf("================================================================================== \n");
    printf("|%-3s|%-20s|%-30s|%-10s|%-10s|\n","STT","Ho va ten","Don vi cong tac","Nam sinh","Thu nhap");
    printf("\n");
    printf("================================================================================== \n");

 for (i=1;i<=n;i++)
    {
    //printf("tien luong: %1.2f",A[i].tl);
    printf("|%-3d|%-20s|%-30s|%-10d|%-10.2f|\n",i,A[i].ht,A[i].dv,A[i].ns,A[i].tn);
    printf("===================================================================================\n");
    }
}

int main()
{
    canbo cb[1000];
    int n;
    printf("\nNhap vao so can bo:");
    scanf("%d",&n);
    nhapdl(cb,n);
    tinhthunhap(cb,n);
    xuatdl(cb,n);
    getch();
}
