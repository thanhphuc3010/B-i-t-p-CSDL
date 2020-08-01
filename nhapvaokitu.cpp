#include<stdio.h>
#include<conio.h>
int main()
{
    char kitu;
    printf("nhap vao mot ky tu tu ban phim:\t");
    scanf("%c",&kitu);
    switch(kitu)
    {
        case 'e':
        case 'u':
        case 'o':
        case 'a':
        case 'i': printf("ki tu %c la nguyen am",kitu);
        break;
        default : printf("ki tu %c la phu am",kitu);
        break;
    }
    getch();

}
