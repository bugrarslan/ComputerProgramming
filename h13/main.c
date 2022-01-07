#include <stdio.h>
#include <stdlib.h>

_Bool oppositeSigns(int x, int y) {

    printf("%d \n", x^y);
    return ((x^y) < 0);

}

int main()
{
    /*
    int vize, final;
    float ort;
    printf("Vizer ve final notunu giriniz: \n");
    scanf("%d %d", &vize, &final);

    ort = (vize * 0.4) + (final * 0.6);

    printf("Ortalama: %.2f", ort);
    printf("\n\nPress enter to exit!");

    fflush(stdin);
    getchar();
    */
    //***************************************************************************
    /*
    int a = 25;
    int b = 77;

    printf("%x %x %x", a, b, a&b); //and
    */
    //***************************************************************************
    /*
    int a = 25;
    int b = 77;

    printf("%x %x %x", a, b, a|b); // or
    */
    //***************************************************************************
    /*
    int a = 25;
    int b = 77;

    printf("%x %x %x", a, b, a^b); // xor
    */
    //***************************************************************************
    /*
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);

    if(n & 1)
        printf("\n odd | %d", n & 1); // tek
    else
        printf("\n even | %d", n & 1); // cift
    */
    //***************************************************************************
    /*
    int x = 4, y = -2;
    if (oppositeSigns(x, y))
        printf("Signs are opposite");
    else
        printf("Signs are not opposite");
    */
    //***************************************************************************
    /*
    double number, sum = 0;

    // the body of the loop is executed at least one

    do {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);
    printf("Sum = %.2lf", sum);
    */

    return 0;
}
