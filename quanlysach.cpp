#include<stdio.h>
#include<conio.h>
#include<string.h>
struct sach
{
    char ten[20],tentg[30];
    int lanxb,namxb;
    float tien;
};
void nhapdl(struct sach sa[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Moi ban nhap vao thong tin cua cuon sach thu %d",i);
        fflush(stdin);
        printf("\nMoi ban nhap vao ten cua cuon sach:");
        gets(sa[i].ten);
        fflush(stdin);
        printf("\nMoi ban nhap vao ten tac gia cua cuon sach:");
        gets(sa[i].tentg);
        fflush(stdin);
        printf("\nMoi ban nhap vao so lan xuat ban cua cuon sach:");
        scanf("%d",&sa[i].lanxb);
        printf("\nMoi ban nhap vao nam xuat ban cua cuon sach:");
        scanf("%d",&sa[i].namxb);
        printf("\nMoi ban nhap vao gia tien cua cuon sach:");
        scanf("%f",&sa[i].tien);
    }
}

/*void xuatdl(SA sa[])
{
    int i;
    printf("Ten cua cuon sach la: %c",sa[i].ten);
    printf("Ten tac gia cua cuon sach la:%c\n",sa[i].tentg);
    printf("Lan xuat ban cua cuon sach la:%d\n",sa[i].lanxb);
    printf("Nam xuat ban cua cuon sach la:%d\n",sa[i].namxb);
    printf("Gia tien cua cuon sach la:%f\n",sa[i].tien);

}*/

float tongtien(sach sa[], int n)
{
    int i;
    float t=0;
    for(i=1;i<=n;i++)
        t=t+sa[i].tien;
    return t;
}
int soluong(sach sa[],int k)
{
	int sl=0;
	for(int i=1;i<=k;i++)
	{
		if(sa[i].namxb<2015)
		sl=sl+1;
	}
	return sl;
}
struct sach max(struct sach sa[],int n)
{
    sach m=sa[0];
    for (int i=1;i<=n;i++)
    {
        if(sa[i].tien>m.tien)
        m=sa[i];
    }
    return m;

}
void inmax(sach sa[],int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(sa[i].tien == max(sa,n).tien)
        {
        printf("\n");
        printf("Ten cua cuon sach la: %s\n",sa[i].ten);
        printf("Ten tac gia cua cuon sach la:%s\n",sa[i].tentg);
        printf("Lan xuat ban cua cuon sach la:%d\n",sa[i].lanxb);
        printf("Nam xuat ban cua cuon sach la:%d\n",sa[i].namxb);
        printf("Gia tien cua cuon sach la:%f\n",sa[i].tien);
        }
    }
}
void sapxep(sach sa[30],int n)
{
    int i,j;
    struct sach t;
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
    {
     if (strcmp(sa[i].ten,sa[j].ten) > 0)
        {
        t=sa[i];
        sa[i]=sa[j];
        sa[j]=t;
        }
    }
}
void indl(sach sa[],int n)
{
    int i;
    printf("\n\n BANG THONG TIN QUAN LY SACH \n");
    printf("============================================================== \n");
    printf("| STT |     TEN SACH     | NAM XUAT BAN | LAN XB | GIA TIEN |\n");
    printf("============================================================== \n");
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("| %3d | %16s | %12d | %6d | %8.1f |\n",i,sa[i].ten,sa[i].namxb,sa[i].lanxb,sa[i].tien);
        printf("========================================================== \n");

    }
}
int main()
{
        int i,n;
        struct sach sa[1000];
        printf("Nhap vao so cuon sach:");
        scanf("%d",&n);
        nhapdl(sa,n);
        printf("\n");
        printf("\nTong tien cua tat ca cac quyen sach la:%f",tongtien(sa,n));
        printf("\nSo luong cac cuon sach xuat ban truoc nam 2015 la:%d",soluong(sa,n));
        printf("\nCuon sach co gia tien cao nhat la");
        inmax(sa,n);
        sapxep(sa,n);
        indl(sa,n);
        getch();
}



