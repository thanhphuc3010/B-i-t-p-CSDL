void nhapMatran(int A[10][10], int &n, int &m)
{
    printf("Nhap vao so dong cua ma tran :\t");
    scanf("%d",&n);
    printf("Nhap vao so cot cua ma tran :\t");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            printf("\nNhap vao phan tu A[%d][%d] la: ",i,j);
            scanf("%d",&A[i][j]);
        }
}
