#include <stdio.h>
#include <conio.h>

main()
{
    int a;
    int *p;
    a=10;
    p=&a;
    printf("Dia chi o nho cua bien a la %u",p);
    printf("\nGia tri cua bien a la %d",*p);
    getch();
}
