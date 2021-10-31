#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int x;
    x = 10;

    if(x == 10) {
        int x;
        x = 99;
        printf("inner x: %d\n", x);

    }

    printf("outer x: %d\n", x);
    */
    //********************************************************************************
    /*int n1, n2, sum;

    printf("Enter first numbers: ");
    scanf("%d", &n1);
    printf("Enter second numbers: ");
    scanf("%d", &n2);

    sum = addNumbers(n1, n2);

    printf("sum = %d", sum);
    */

    //***********************************************************************************

    /*int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            if(i%2 ==0) {
                sum = sum + i;
            }
        }

    printf("Summary from 1 to Number : %i", sum);
    */
    //***************************************************************************************

    int i, j, rows, counter;

    printf("Enter the number of rows of Floyd's triangle: ");
    scanf("%d", &rows);
    printf("**************************\n");

    for (counter = 1, i = 1; i <= rows; i++){

        for(j = 1; j <= i; j++) {
            printf("%3d", counter++);
        }
        printf("\n");
    }

    return 0;

    /*printf("Second way\n: ");
    sum = n * (n + 1) / 2;

    printf("sum");
    */





}

/*int addNumbers(int a, int b) {
    int result;
    result = a + b;
    return result;

}*/
