#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3, b, c;

    c = ++a; // arttýr deðiþkene ata
    b = c--; // deðiþkene ata azalt

    printf("%d %d %d", a, b, c);

    int x = 5, y;

    y = x;
    printf("y = %d\n", y);

    y += x;
    printf("y = %d\n", y);

    y -= x;
    printf("y = %d\n", y);

    y *= x;
    printf("y = %d\n", y);

    y /= x;
    printf("y = %d\n", y);

    y %= x;
    printf("y = %d\n", y);

    _Bool bool;

    printf("Size of boolean %lu bytes\n", sizeof(bool));

    char str[20] = "Program";
    char str2[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

    printf("%s\n", strlen(str));
    printf("Length of string b = %zu \n", strlen(str2));

    return 0;
}
