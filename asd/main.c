#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, number;

    printf("Enter a number:");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
        for(j = 1; j <= number; j++)
        {
            if(i == j || i + j == 6)
            {
                printf("  %d", 1);
            }
            else
            {
                printf("  %d", 0);
            }
        }
        printf("\n");
    }
    return 0;
}
