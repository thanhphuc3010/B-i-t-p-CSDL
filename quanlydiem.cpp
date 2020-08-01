#include<stdio.h>
#include<conio.h>
#include<string.h>

struct sinhvien
{
    char hoten[30];
    char quequan[50];
    int ns;
    float dt,dv,dnn,ut,dtb,dtong;
};
void nhapdl(sinhvien A[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Moi ban nhap vao thong tin cua sinh vien thu %d:\n",i);
        fflush(stdin);
        printf("Moi ban nhap vao ho ten:");
        gets(A[i].hoten);
        fflush(stdin);
        printf("Moi ban nhap vao que quan:");
        gets(A[i].quequan);
        fflush(stdin);
        printf("Moi ban nhap vao nam sinh:");
        scanf("%d",&A[i].ns);
        printf("Moi ban nhap vao diem toan:");
        scanf("%f",&A[i].dt);
        printf("Moi ban nhap vao diem van:");
        scanf("%f",&A[i].dv);
        printf("Moi ban nhap vao diem ngoai ngu:");
        scanf("%f",&A[i].dnn);
        printf("Moi ban nhap vao diem uu tien:");
        scanf("%f",&A[i].ut);
        printf("\n");
    }
}
void tinhtoan(sinhvien A[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        A[i].dtb=(A[i].dt+A[i].dv+A[i].dnn)/3;
        A[i].dtong=A[i].dt+A[i].dv+A[i].dnn+A[i].ut;
    }
}
int dem(sinhvien A[],int n)
{
    int dem=0;
    for(int i=1;i<=n;i++)
        if(A[i].dtb>=7 && A[i].dt>=3 && A[i].dv>=3 && A[i].dnn>=3)
            dem=dem+1;
    return dem;
}
float tile(sinhvien A[],int n)
{
    float t=0;
    float tl;
    for(int i=1;i<=n;i++)
        {
            if(A[i].dtong>24)
            t=t+1;
            tl=(t/n)*100;
        }
        return tl;
}
void sapxep(sinhvien A[],int n)
{
    int i,j;
    sinhvien tg;
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
        if(A[i].dtong>A[j].dtong)
    {
        tg=A[i];
        A[i]=A[j];
        A[j]=tg;
    }
}
void xuatdl(sinhvien A[],int n)
{
    printf("\n\n       BANG THONG TIN DIEM CUA SINH VIEN\n");
    printf("================================================\n");
    printf("|%-3s|%-20s|%-10s|%-10s|\n","STT","Ho va ten","Nam sinh","Diem tong");
    printf("================================================\n");
    for(int i=1;i<=n;i++)
    {
        printf("|%-3d|%-20s|%-10d|%-10.2f|\n",i,A[i].hoten,A[i].ns,A[i].dtong);
        printf("================================================\n");
    }
}
int main()
{
    int i,n;
    struct sinhvien sv[1000];
    printf("Moi ban nhap vao so sinh vien:");
    scanf("%d",&n);
    nhapdl(sv,n);
    tinhtoan(sv,n);
    printf("So luong sinh vien co diem trung binh tu 7 tro len va khong co mon nao duoi 3 la:%d\n",dem(sv,n));
    printf("Ti le sinh vien co diem tong tren 24 la:%.2f%%",tile(sv,n));
    sapxep(sv,n);
    xuatdl(sv,n);
    getch();
}

