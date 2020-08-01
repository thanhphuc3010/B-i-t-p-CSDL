#include <stdio.h>
#include <conio.h>
main()
{
    char HT[20];
    int ns;
    int dcc,dkt;
    float dt,dtk;
    /*nhap thong tin cua sinh vien */
    printf("\nnhap vao ho ten cua sinh vien\t");
    gets(HT);

    printf("\nnhap vao nam sinh cua sinh vien\t");
    scanf("%d",&ns);

    printf("\nnhap vao diem chuyen can cua sinh vien\t");
    scanf("%d",&dcc);

    printf("\nnhap vao diem kiem tra cua sinh vien\t");
    scanf("%d",&dkt);

    printf("\nnhap vao diem kiem thi cua sinh vien\t");
    scanf("%f",&dt);
    /*tinh diem tk*/
    dtk = dcc*0.1+dkt*0.2+dt*0.7;
    /*in thong tin sinh vien*/
    /*printf("ho ten sinh vien: %s\t\n", HT);
    printf("nam sinh: %d\t\n", ns);
    printf("diem chuyen can: %d\t\n", dcc);
    printf("diem kiem tra: %d\t\n", dkt);
    printf("diem thi: %f\t\n", dt);
    printf("diem tong ket cua sinh vien do la:\t %f",dtk);*/
    printf("diem chuyen can:%d\n diem kiem tra:%d\n diem thi:%f\n",dcc,dkt,dt);
    printf("diem tong ket cua sinh vien do la:\t %f",dtk);
    getch();
    return 0;






}
