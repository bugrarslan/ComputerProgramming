#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int num;
    FILE *fptr;
    // use appropriate location if you are using MacOS or Linux
    fptr = fopen("D:/ComputerProgramming/h15/program.txt", "w");

    if(fptr == NULL)
    {
        printf("Error");
        exit(1);
    }

    printf("Enter num: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);
    */
    //************************************************************************
    /*
    int num;
    FILE *fptr;

    if((fptr = fopen("D:/ComputerProgramming/h15/program.txt", "r")) == NULL)
        {
            printf("Error! opening file");

            // Program exits if the file pointer returns NULL.
            exit(1);
        }

    fscanf(fptr, "%d", &num);

    printf("Value of n = %d", num);
    fclose(fptr);
    */
    //**************************************************************************
    /*
    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    // get file names from user
    printf("Enter the name of file to be copied:");
    scanf("%63s", inName);
    printf("Enter the name of output file:");
    scanf("%63s", outName);

    // open input and output files
    if((in = fopen(inName, "r")) == NULL)
    {
        printf("Can't open %s for reading.\n", inName);
        return 1;
    }

    if((out = fopen(outName, "w")) == NULL)
    {
        printf("Can't open %s for writing.\n", outName);
        return 2;
    }

    // copy in to out
    while ((c = getc(in)) != EOF)
        putc(c, out);

    // Close open files
    fclose(in);
    fclose(out);

    printf("File has been copied.\n");
    */

    return 0;
}
