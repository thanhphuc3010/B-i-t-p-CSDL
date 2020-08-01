/* Cho 1 tập phiếu lương của n cán bộ. Mỗi phiếu bao gồm các thông tin sau:
    Họ và tên
    Tuổi
    Đơn vị công tác
    Hệ số lương
    Thưởng
    Thu nhập
    Thuế
Viết chương trình thực hiện các chức năng sau:
    1. Khai báo và nhập thông tin cho n cán bộ
    2. Tính thu nhập của từng cán bộ, biết Thu nhập= Hệ số lương*2000000+thưởng
    3. Tính thuế thu nhập của từng cán bộ biết rằng, nếu thu nhập > 10tr thì thuế bằng 10% của thu nhập ngược lại thuế bằng 0
    4. Sắp xếp thông tin của các cán bộ theo thứ tự tăng dần của tuổi và in thông tin dưới dạng bảng sau
    |STT| Họ và tên | Tuổi | Thu  nhập | Thuế |
    ===========================================*/ //43

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Canbo
{
    char ht[30];
    char dv[30];
    int  tuoi;
    float hsl,thg,tn,thue;

};
void nhapdl(Canbo A[],int n)
{
 int i;
 for (i=1;i<=n;i++)
    {
    printf("\nMoi ban nhap vao thong tin cua can bo thu %d:\n",i);
    fflush(stdin);
    printf("\nMoi ban nhap vao ho ten cua can bo: ");gets(A[i].ht);
    fflush(stdin);
    printf("\nMoi ban nhap vao don vi cong tac cua can bo: ");gets(A[i].dv);
    printf("\nMoi ban nhap vao tuoi cua can bo : ");
    scanf("%d",&A[i].tuoi);
    printf("\nMoi ban nhap vao he so luong cua can bo: ");scanf("%f",&A[i].hsl);
    printf("\nMoi ban nhap vao tien thuong cua can bo: ");scanf("%f",&A[i].thg);
    }
}
float tinhthunhap(Canbo A[],int n)
{
        int i;
        for (i=1;i<=n;i++)
        A[i].tn=A[i].hsl*2000000+A[i].thg;
        return A[i].tn;
}

void tinhthue(Canbo A[], int n)
{
    for (int i=1;i<=n;i++)
    {
        if(A[i].tn>10000000)
        A[i].thue=A[i].tn*0.1;
        else A[i].thue=0;
    }
}
void sapxep( Canbo A[],int n)
{
    int i,j;
    struct Canbo temp;
    for (i=1;i<=n-1;i++)
        for (j=i+1;j<=n;j++)
            if (A[i].tuoi > A[j].tuoi)
            {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            }
}
void xuatdl(Canbo A[], int n)
{
    int i;
    printf("\n\n                     BANG THONG TIN CUA TUNG CAN BO \n");
    printf("==============================================================================\n");
    printf("|%-3s|%-30s|%-10s|%-15s|%-15s|\n","STT","Ho va ten","Tuoi","Thu nhap","Thue");
    printf("==============================================================================\n");

    for (i=1;i<=n;i++)
    {
    printf("|%-3d|%-30s|%-10d|%-15.2f|%-15.2f|\n",i,A[i].ht,A[i].tuoi,A[i].tn,A[i].thue);
    printf("==============================================================================\n");
    }
}
int main()
{
    int n;
    struct Canbo cb[1000];
    printf("\nNhap vao so can bo:");
    scanf("%d",&n);
    nhapdl(cb,n);
    tinhthunhap(cb,n);
    tinhthue(cb,n);
    sapxep(cb,n);
    xuatdl(cb,n);
    printf("\n\nBang thong tin cua can bo sau khi sap xep la:");
    xuatdl(cb,n);
    getch();
}
