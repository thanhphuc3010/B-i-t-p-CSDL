#include<stdio.h>
#include<conio.h>
#include<math.h>
//giai phuong trinh bac 2
// ax^2+bx+c=0
int main()
{
    //khai bao
    float a,b,c,x,x1,x2;
    //nhap vao gia trị cua a,b,c
    printf("\nNhap vao so a:\t");
    scanf("%f",&a);

    printf("\nNhap vao so b:\t");
    scanf("%f",&b);

    printf("\nNhap vao so c:\t");
    scanf("%f",&c);
    // tinh toan
    if (a==0)
	{
		if (b==0)
		{
			if (c==0) printf("Phuong trinh vo so nghiem");
			else printf("Phuong trinh vo nghiem");
		}
		else
		{
			x=-b/c;
			printf("Phuong trinh co 1 nghiem:%0.2f\t",x);
		}
	}
	else
	{
    //tinh gia tri cua delta dt
    double delta=b*b-4*a*c, cdt;
    cdt=sqrt(delta);

    //tinh toan
    if(delta <0)
        printf("\nPhuong trinh vo nghiem");
    else
        if(delta==0)
        {
            x=-b/(2*a);
            printf("\nPhuong trinh co nghiem kep %0.2f\t",x);
        }

        else
        {
            x1=(-b+cdt)/(2*a);
            x2=(-b-cdt)/(2*a);
        printf("\nPhuong trinh co 2 nghiem phan biet la\t %0.2f \t %0.2f",x1,x2);
        }
	}

    getch();
}
