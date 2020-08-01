#include<stdio.h>
#include<conio.h>
int main()
{
    //KHAI BAO
    int i,j,m,n,p,q,max;
    float S=0, tbc;
    int A[7][7],B[7][7],C[20][20];

    //NHAP DU LIEU CHO MANG A
    printf("Nhap vao so dong cua ma tran A:\t");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran A:\t");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
            printf("Phan tu A[%d][%d] là:\t",i,j);
            scanf("%d",&A[i][j]);
            }
    //IN MANG VUA NHAP DUOI DANG MA TRAN
    printf("Ma tran A vua nhap la:\n");
    for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                printf("%5d",A[i][j]);
                printf("\n");
            }

    //NHAP DU LIEU CHO MANG B
    printf("Nhap vao so dong cua ma tran B:\t");
    scanf("%d",&p);
    printf("Nhap vao so cot cua ma tran B:\t");
    scanf("%d",&q);

    for(i=1;i<=p;i++)
        for(j=1;j<=q;j++)
            {
            printf("Phan tu B[%d][%d] là: \t",i,j);
            scanf("%d",&B[i][j]);
            }
    //IN MANG VUA NHAP DUOI DANG MA TRAN
    printf("Mang B vua nhap la:\n");
    for(i=1;i<=p;i++)
            {
                for(j=1;j<=q;j++)
                printf("%5d",B[i][j]);
                printf("\n");
            }
            printf("Tich cua 2 ma tran A va B la:\n");
    if(m==p)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=q;j++)
            {
                C[i][j]=0;
                for(int r=1;r<=p;r++)
                {
                    C[i][j]+=A[i][r]*B[r][j];
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=q;j++)
                printf("%5d",C[i][j]);
                printf("\n");
        }
    }
    else
    {
        printf("Khong thuc hien duoc phep nhan 2 ma tran A");
    }
return 0;
getch();
}
