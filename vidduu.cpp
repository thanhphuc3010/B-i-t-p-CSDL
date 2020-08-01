#include<stdio.h>
#include<conio.h>
#include<math.h>
struct Hoadon
{
    char ht[30];
    char dc[20];
    float a,b,c,tien;

};
void Nhapdl( struct Hoadon TD[1000], int n)
{
    for(int i=1;i<=n;i++)
     {
         printf("Moi ban nhap thong tin khach hang thu %d\n",i);
         fflush(stdin);
         printf("Moi ban nhap vao ho va ten cua khach hang:");
         gets(TD[i].ht);
         printf("Moi ban nhap vao dia chi cua khach hang:");
         gets(TD[i].dc);
         printf("Moi ban nhap vao chi so dong ho thang 9:");
         scanf("%f",&TD[i].a);
         printf("Moi ban nhap vao chi so dong ho thang 10:");
         scanf("%f",&TD[i].b);
    }
}
void tiendien(struct Hoadon TD[1000],int n)
{
    int i;
    for (i=1;i<=n;i++)
    {
        TD[i].c=TD[i].b-TD[i].a;
        TD[i].tien=TD[i].c *8000;
    }
}
void Indl(struct Hoadon TD[1000],int n)
{

    printf("\n\nBANG QUAN LY HOA DON DIEN NUOC\n");
    printf("========================================================================\n");
    printf("|%-3s|%-25s|%-20s|%-20s|\n","STT","HO TEN KHACH HANG","CHI SO TIEU THU","SO TIEN");
    printf("========================================================================\n");
    int i;
    for (i=1;i<=n;i++)
    {
    printf("|%-3d|%-25s|%-20f|%-20f|\n",i,TD[i].ht,TD[i].c,TD[i].tien);
    printf("========================================================================\n");
    }
}
int main()
{
    struct Hoadon TD[1000];
    int n;
    printf("Moi ban nhap vao so khach hang:");
    scanf("%d",&n);
    Nhapdl(TD,n);
    tiendien(TD,n);
    Indl(TD,n);
    getch();
}
