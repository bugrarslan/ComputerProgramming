#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count: %i, x = %i", count, x);


    **********************************************************************************


    char c = 'Q';
    char *char_pointer = &c;

    printf("%c %c \n", c, char_pointer);

    c = '/';
    printf("%c %c \n", c, char_pointer);

    *char_pointer = '(';
    printf("%c %c \n", c, char_pointer);

    ************************************************************************************


    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d \n", a[10-i]);
    }

    ***************************************************************************************
    */

    int x = 1, y = 2, *ip;
    ip = &x;
    printf("x'in adresi = %p     |     y'nin adresi = %p\n", &x, &y);
    printf("x = %d | y = %d      |     ip = %p\n", x, y, ip);

    printf("********************************************************************\n");
    y = *ip;
    printf("x'in adresi = %p     |     y'nin adresi = %p\n", &x, &y);
    printf("x = %d | y = %d      |     ip = %p\n", x, y, ip);

    printf("********************************************************************\n");
    x = ip;
    printf("x'in adresi = %p     |     y'nin adresi = %p\n", &x, &y);
    printf("x = %d | y = %d      |     ip = %p\n", x, y, ip);

    printf("********************************************************************\n");
    *ip = 3;
    printf("x'in adresi = %p     |     y'nin adresi = %p\n", &x, &y);
    printf("x = %d | y = %d      |     ip = %p\n", x, y, ip);


    return 0;


}
