#include <stdio.h>
#include <conio.h>
main()
{
    char HT[20],DV[30];
    int TT,TBH;
    float HSL,TL;
    /*nhap thong tin cua can bo*/
    printf("\nnhap vao ho ten cua can bo\t");
    gets(HT);
    /*nhap ten don vi cua can bo, vidu: truong dai hoc kinh te quoc dan*/
    printf("\nnhap vao don vi cua can bo\t");
    gets(DV);

    printf("\nnhap vao tien thuong cua can bo\t");
    scanf("%d",&TT);

    printf("\nnhap vao tien bao hiem cua can bo\t");
    scanf("%d",&TBH);

    printf("\nnhap vao he so luong\t");
    scanf("%f",&HSL);

    /*tinh tien duoc linh */
    TL = HSL*2000000+TT-TBH;

    /*in thong tin can bo */
    printf("ho ten can bo la : %s\t\n", HT);
    printf("don vi cua can bo la: %s\t\n",DV);
    printf("tien luong duoc linh cua can bo do la:\t %f",TL);
    getch();
}
