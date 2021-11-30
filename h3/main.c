#include <stdio.h>
#include <stdlib.h>

int main()
{


    int answer, result;

    answer = 100;
    result = answer - 10;

    printf("The result is %i\n", result + 5);



    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);


    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    result = a - b;  // subtraction
    printf("a - b = %i\n", result);

    result = b * c;  // multiplication
    printf("b * c = %i\n", result);

    result = a / c;  // division
    printf("a / c = %i\n", result);

    result = a + b * c;  // precedence
    printf("a + b * c = %i\n", result);

    printf("a + b + c * d = %i\n", a + b + c * d);

    printf("yapmak istediðiniz iþlemi giriniz: t: toplama, c: çýkarma, ca: çarpma, b: bölme\n");

    char character = getchar();

    printf("lütfen sayýlarý giriniz: \n");

    int number1 = getchar();
    int number2 = getchar();



    return 0;
}
