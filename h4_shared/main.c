#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, rows, space;

    printf("Enter the height: ");
    scanf("%d", &rows);

    for (i = 0; i < rows ; i++) {
        printf("\n");

        for (space = 1; space <= rows - (i + 1); space++) {
            printf("   ");
        }

        for (j = 0; j <= (i*2); j++) {
            printf("%d  ", j + 1);
        }
    }

    printf("\n");

    return 0;
}
