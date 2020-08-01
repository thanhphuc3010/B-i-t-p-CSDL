#include<stdio.h>
#include<conio.h>
int main()
{
    //KHAI BAO
    int i,j,m,n,max;
    float S, tbc;
    int A[7][7];

    //NHAP DU LIEU
    printf("Nhap vao so dong cua ma tran:\t");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran:\t");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            {
            printf("Hay nhap phan tu dong %d cot %d: \t",i,j);
            scanf("%d",&A[i][j]);
            }
    //IN MANG VUA NHAP
    printf("Mang vua nhap la:\n");
    for(i=1;i<=n;i++)
        { for(j=1;j<=m;j++)
                printf("%5d",A[i][j]);
                printf("\n");}
}
