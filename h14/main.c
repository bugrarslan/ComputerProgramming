#include <stdio.h>
#include <stdlib.h>

int main()
{
    //*********************************************************************
    /*
    unsigned char BYTE_MASK = 0xff;
    unsigned long color = 0x002a162f;
    unsigned char blue, green, red;

    red = color & BYTE_MASK;
    green = (color >> 8) & BYTE_MASK;
    blue = (color >> 16) & BYTE_MASK;

    printf("red = %x, green = %x, blue = %x", red, green, blue);
    */
    //*********************************************************************
    /*
    int i;
    int diceRoll;

    srand(time(NULL));

    for(i = 0; i < 2; i++) {
        diceRoll = (rand()%6) + 1;
        printf("%d \n", diceRoll);
    }
    */
    //*********************************************************************
    /*
    int randomGenNo = 0, count = 0, num;
    //int sTime;
    //long lTime;

    //lTime = time(NULL);
    //sTime = (unsigned) lTime/2;
    srand(time(NULL));

    randomGenNo = rand() % 100 + 1;

    while(1) {
        count += 1;

        printf("\n\n Guess a number from (1 to 100): ");
        scanf("%d", &num);

        if(randomGenNo == num) {
            printf("\n Congratulations, you have guessed a correct number in the %d. try.\n", count);
            break;
        }
        else if(randomGenNo < num) {
            printf("Generated number is less than entered number, try your luck again...");
        }
        else if(randomGenNo > num) {
            printf("Generated number is greater than entered number, try your luck again...");
        }

        if(count == 7) {
            printf("\n\n### Maximum limit of attempt finished, Bad luck!!!\n");
            printf("\n\n### Generated number was: %d\n", randomGenNo);
            break;
        }

    }
    */
    //*********************************************************************
    /*
    int a[3], i;
    srand(time(NULL));
    do {
        for(i = 0; i < 3; i++)
        {
            a[i] = rand() % 9 + 1;
        }
    }while(a[0] == a[1] || a[0] == a[2] || a[1] == a[2]);

    printf("%d", ((a[0] * 100) + (a[1] * 10) + a[2]));

    */
    //*********************************************************************
    /*
    int i, j, number;

    printf("Enter a number:");
    scanf("%d \n", &number);

    for(i = 1; i <= number; i++)
    {
        for(j = 1; j <= number; j++)
        {
            if(i == j || i + j == 6)
            {
                printf("%d", 1);
            }
            else
            {
                printf("%d", 0);
            }
        }
        printf("\n");
    }
    */
    return 0;
}
