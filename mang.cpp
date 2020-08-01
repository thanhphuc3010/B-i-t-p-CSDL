#include<stdio.h>
#include<conio.h>

int main()
{
    //KHAI BAO
    int i, n, max,tg;
    int A[10];

    float s, tbc;

    //NHAP DU LIEU
    printf("Nhap vao so phan tu cua day:\t");
    scanf("%d",&n);

    for(i=1;i<=n;i++)

    {
        printf("Ban hay nhap vao phan tu thu %d:\t",i);
        scanf("%d",&A[i]);
    }
    //IN MANG VUA NHAP
    printf("Mang vua nhap la:\n");
    for(i=1;i<=n;i++)
    printf("%5d",A[i]);
    //TINH TONG
    float S=0;
    for(i=1;i<=n;i++)
        S=S+A[i];
        printf("\nTong cac phan tu cua day la: %3.1f",S);

    //TINH TBC
        tbc=S/n;
        printf("\nTrung binh cong cua day la: %3.1f",tbc);

    //TIM MAX CUA DAY
        max=A[1];
    for(i=2;i<=n;i++)
        if (A[i]>max) max=A[i];
        printf("\nGia tri lon nhat cua day la: %d",max);

    return 0;
    getch();


}
