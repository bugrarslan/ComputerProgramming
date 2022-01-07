#include <stdio.h>
#include <stdlib.h>
//programiz.com
// const = sabit degisken



int main()
{
    // Spagetti code
    /*
    const int maxInput = 100;
    int i;
    double number, average, sum = 0.0;

    for(i = 1; i <= maxInput; ++i)
    {
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);

        // go to jump if the user enters a negative number
        if(number < 0.0)
        {
            goto jump;
        }
        sum += number;

    }
    jump:
        average = sum / (i - 1);
        printf("Sum = %.2lf\n", sum);
        printf("Average = %.2f", average);
    */
    // Clean code *********************************************************

    const int maxInput = 100;
    int i;
    double number, sum = 0.0;

    for (i = 1; i <= maxInput; ++i) {
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);

        if(number < 0.0) {
            jump(&sum, &i);
            break;
        }
        sum += number;

    }

    //*****************************************************************
    /*
    int line[10];

    for(int i = 0; i < 10; line[i++] = 0)
        ; // null statement

    for(int i = 0; i < 10; i++)
        printf("line[%d] = %d\n", i, line[i]);
    */
    //********************************************************************


    return 0;
}

void jump(double *summary, int *index) {
    double average;
    average = *summary / (*index - 1);
    printf("Sum = %.2f\n", *summary);
    printf("Average = %.2f", average);
}
