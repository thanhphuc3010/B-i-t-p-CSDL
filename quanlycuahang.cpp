#include<stdio.h>
#include<conio.h>
#include<string.h>

struct cuahang
{
    char ma[20]; //Mahang co the bao gom ca chu va so
    char ten[30];
    int thang;             //thang ban hang
    float tien;
};

void nhapdl(cuahang A[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Moi ban nhap vao thong tin cua mat hang thu %d:\n",i);
        fflush(stdin);
        printf("Moi ban nhap vao ma hang:");
        gets(A[i].ma);
        fflush(stdin);
        printf("Moi ban nhap vao ten mat hang:");
        gets(A[i].ten);
        printf("Moi ban nhap vao thang ban hang:");
        scanf("%d",&A[i].thang);
        printf("Moi ban nhap vao so tien ban hang:");
        scanf("%f",&A[i].tien);
        printf("\n");
    }
}

float tongtien(cuahang A[],int n)
{
    int i;
    float S=0;
    for(i=1;i<=n;i++)
        S=S+A[i].tien;
    return S;
}
void xuat(cuahang A)
{
	printf("\nMa mat hang la:%s",A.ma);
	printf("\nTen mat hang la:%s",A.ten);
	printf("\nThang ban la:%d",A.thang);
	printf("\nSo tien ban la:%f",A.tien);
	printf("\n");
}

void nhonhat(cuahang A[],int n)
{
    float min=A[1].tien;
    int i;
    for(i=1;i<=n;i++)
        if(A[i].tien<min)
            min=A[i].tien;
    for(i=1;i<=n;i++)
        if(A[i].tien==min)
        {
            printf("\nMa mat hang la:%s",A[i].ma);
            printf("\nTen mat hang la:%s",A[i].ten);
            printf("\nThang ban la:%d",A[i].thang);
            printf("\nSo tien ban la:%f",A[i].tien);
            printf("\n");

        }

}
float chenhlech(cuahang A[],int n)
{
    int i;
    float tt11=0,tt12=0,cl=0;
    for(i=1;i<=n;i++)
    {
        if(A[i].thang==11) tt11=tt11+A[i].tien;
        if(A[i].thang==12) tt12=tt12+A[i].tien;
    }
    cl=tt12-tt11;
    return cl;
}

void sapxep(cuahang A[],int n)
{
    int i,j;
    cuahang temp;
    for(i=1;i<=n-1;i++)
            for(j=i+1;j<=n;j++)
            if(A[i].tien > A[j].tien)
            {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            }
}
void inbang(cuahang A[],int n)
{
    printf("BANG TONG KET CAC MAT HANG BAN DUOC TRONG THANG 12\n");
    printf("======================================================\n");
    printf("|%-10s|%-20s|%-20s|\n","MA HANG","TEN HANG","SO TIEN BAN");
    printf("======================================================\n");
    for(int i=1;i<=n;i++)
    {
    printf("|%-10s|%-20s|%-20f|\n",A[i].ma,A[i].ten,A[i].tien);
    printf("======================================================\n");
    }
    printf("|          |%-20s|%-20f|\n","TONG",tongtien(A,n));
    printf("======================================================\n");

}

int main()
{
    int n;
    cuahang mh[100];
    printf("Moi ban nhap vao so mat hang:");
    scanf("%d",&n);
    nhapdl(mh,n);
    printf("Tong tien ban hang cua tat ca mat hang la:%f\n",tongtien(mh,n));
    cuahang s12[50];
    printf("Chenh lech giua tong tien ban thang 11 va tong tien ban thang 12 la:%f\n",chenhlech(mh,n));
    int s=1;
    for(int i=1;i<=n;i++)
        {
            if(mh[i].thang==12)
            {
                s12[s]=mh[i];
                s=s+1;
            }
        }
    printf("Mat hang co tien ban trong thang 12 thap nhat la:");
    nhonhat(s12,s-1);
    sapxep(s12,s-1);
    inbang(s12,s-1);
    getch();
}
