#include<stdio.h>
#include<conio.h>
#include<string.h>

struct TK
{
    int sothe;
    char ten[30];
    int thang,kyhan;
    float tien;
};
void nhapdl(TK A[], int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
    printf("Moi ban nhap vao the gui tiet kiem thu:%d\n",i);
    fflush(stdin);
    printf("Moi ban nhap vao so the:");
    scanf("%d",&A[i].sothe);
    fflush(stdin);
    printf("Moi ban nhap vao ten nguoi gui:");
    gets(A[i].ten);
    printf("Moi ban nhap vao thang gui:");
    scanf("%d",&A[i].thang);
    printf("Moi ban nhap vao ky han gui neu la 3 thang nhap 3, 6 thang nhap 6, 12 thang nhap 12, khong ky han nhap 0:");
    scanf("%d",&A[i].kyhan);
    printf("Moi ban nhap vao so tien gui:");
    scanf("%f",&A[i].tien);
    printf("\n");
    }
}
float tongtien(TK A[], int n)
{
    float   S=0;
    for(int i=1;i<=n;i++)
    S=S+A[i].tien;
    return  S;
}
void lonnhat(TK A[],int n)
{
    float max=A[1].tien;
    for(int i=1;i<=n;i++)
    {
        if(A[i].tien>max)
        max=A[i].tien;
    }
    for(int i=1;i<=n;i++)
        if(A[i].tien==max)
    {
    printf("So the tiet kiem la:%d\n",A[i].sothe);
    printf("Ten nguoi gui la:%s\n",A[i].ten);
    printf("Thang gui la:%d\n",A[i].thang);
    printf("Ky han gui la:%d\n",A[i].kyhan);
    printf("So tien gui la:%f\n",A[i].tien);
    }

}
void xuat(TK A)
{
    printf("So the tiet kiem la:%s\n",A.sothe);
    printf("Ten nguoi gui la:%s\n",A.ten);
    printf("Thang gui la:%d\n",A.thang);
    printf("Ky han gui la:%d\n",A.kyhan);
    printf("So tien gui la:%f\n",A.tien);
}

float chenhlech(TK A[],int n)
{
    float tt12=0, tt6=0, cl=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i].kyhan==6) tt6=tt6+A[i].tien;
        if(A[i].kyhan==12) tt12=tt12+A[i].tien;
    }
    cl=tt12-tt6;
    return cl;
}

void sapxep(TK A[],int n)
{
    TK tg;
    for(int i=1;i<=n-1;i++)
    for(int j=i+1;j<=n;j++)
    {
        if(A[i].sothe>A[j].sothe)
        {
            tg=A[i];
            A[i]=A[j];
            A[j]=tg;
        }
    }
}

void inbang(TK A[],int n)
{
    printf("BANG THONG KE THE TIET KIEM KY HAN 12 THANG\n");
    printf("=================================================================\n");
    printf("|%-10s|%-30s|%-20s|\n","SO THE","TEN NGUOI GUI","SO TIEN GUI");
    printf("=================================================================\n");
    for(int i=1;i<=n;i++)
    {
    printf("|%-10d|%-30s|%-20f|\n",A[i].sothe,A[i].ten,A[i].tien);
    printf("=================================================================\n");
    }
    printf("|          |%-30s|%-20f|\n","TONG",tongtien(A,n));
    printf("=================================================================\n");

}

int main()
{
    int i,n;
    struct TK tk[1000];
    printf("Moi ban nhap vao so the tiet kiem:");
    scanf("%d",&n);
    nhapdl(tk,n);
    printf("Tong tien gui tiet kiem cua tat ca cac the la:%f",tongtien(tk,n));
    printf("\nThe tiet kiem co tien gui cao nhat la:\n");
    //xuat(caonhat(tk,n));
    lonnhat(tk,n);
    printf("\nChenh lech giua tong tien gui ky han 12 thang voi tong tien gui ky han 6 thang la:%f",chenhlech(tk,n));
    TK s12[50];
    int s=1;
    for(i=1;i<=n;i++)
    {
        if(tk[i].kyhan==12)
        {
        s12[s]=tk[i];
        s=s+1;
        }
    }
    sapxep(s12,s-1);
    inbang(s12,s-1);
    getch();
}
