#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[20];
    int j;

    /*
    printf("Please write a string:\n");
    gets(sentence);

    printf("\nYour sentence in reverse:\n");

    for (j = 1; j <= estrln(sentence); j++) {

        printf("%c", sentence[strlen(sentence)-j]);
    }
    */

    printf("\n*****************Second way*****************\n");

    printf("\nPlease write a string:\n");
    gets(sentence);

    printf("\nYour sentence in reverse:\n");

    printf("%s\n", strrev(sentence));

    return 0;
}
