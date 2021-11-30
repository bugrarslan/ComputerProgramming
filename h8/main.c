#include <stdio.h>
#include <stdlib.h>

int fact(int number2){

    if(number2 <= 1) // base case
        return 1;

    else
        return number2 * fact(number2 - 1);

}

long int multiplyNumbers(int n);

int main()
{
    printf("*********************************************************************\n");
    int i, s = 28, t = 2;

    for(i = 1; i < 40; i++) {

        if(s % i == 0) {

            i += 2;
            t *= 3;
        }
        else{

            t++;
            break;
        }

    }

    printf("%d\n", t);

    printf("*********************************************************************\n");

    int j, number, sum = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(j = 1; j <= number; j++){

        sum *= j;
    }


    printf("%d\n", sum);

    printf("*********************************************************************\n");
    int var = fact(5);
    if(var == 1){
        printf("The number can not be 1 or below 1");
    }
    else{
        printf("%d", var);
    }

    printf("*********************************************************************\n");

    int number3;
    printf("Enter a number: ");
    scanf("%d", &number3);
    printf("factorial of %d = %ld", number3, multiplyNumbers(number3));

    return 0;
}

long int multiplyNumbers(int n) {

    if(n>= 1)
        return n * multiplyNumbers(n - 1);
    else
        return 1;
}
