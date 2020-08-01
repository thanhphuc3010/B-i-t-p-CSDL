#include<stdio.h>
#include<conio.h>
int main()
{
    //KHAI BAO
    int i,j,m,n,p,q,max;
    float S=0, tbc;
    int A[7][7],B[7][7],C[7][7];

    //NHAP DU LIEU CHO MANG A
    printf("Nhap vao so dong cua ma tran A:\t");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran A:\t");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
            printf("Hay nhap phan tu dong %d cot %d: \t",i,j);
            scanf("%d",&A[i][j]);
            }
    //IN MANG VUA NHAP DUOI DANG MA TRAN
    printf("Mang A vua nhap la:\n");
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
            printf("Hay nhap phan tu dong %d cot %d: \t",i,j);
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
    //TINH MA TRAN C=A+B
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        C[i][j]=A[i][j]+B[i][j];
    //IN C=A+B
    printf("Mang C vua nhap la:\n");
    for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                printf("%5d",C[i][j]);
                printf("\n");
            }
    //TINH TONG CAC PHAN TU CUA MA TRAN A
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            S=S + A[i][j];
            printf("\nTong cac phan tu cua ma tran A la:%f",S);
    //TINH TRUNG BINH CONG CAC PHAN TU CUA MA TRAN A
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            tbc=S/(i*j);
            printf("\nTrung binh cong cac phan tu cua ma tran A la:%3.2f",tbc);
     //TIM PHAN TU LON NHAT CUA MA TRAN A
     max=A[1][1];
     for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if (A[i][j]>max)
            max=A[i][j];
            printf("\nPhan tu lon nhat cua ma tran la: %d",max);
    //TINH TICH 2 MA TRAN
            getch();

}
