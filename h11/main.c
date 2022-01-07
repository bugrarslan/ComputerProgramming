#include <stdio.h>
#include <stdlib.h>
struct person {
    int age;
    float weight;
    char name[30];
};

int main()
{
    /*
    printf("Result: %d", fonk(7, 5));
    */
    //*****************************************************
    /*
    int a[9] = {3, -4, 5, 2, -8, 3, 1, 4, 3};
    int i, t = 0;

    for(i = 2; i < 9; i++)
    {
        t += a[i];
        if(t == i)
            break;
    }

    printf("%d", t);
    */
    //*****************************************************
    /*
    int var = 10;

    int *ptr = &var;
    *ptr = 20;

    int **dptr = &ptr;
    **dptr = 30;

    printf("var = %d", var);
    */
    //****************************************************
    /*
    struct person *ptr;
    int i, n;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    //Allocating memory for n numbers of struct
    ptr = (struct person*) malloc(n*sizeof(struct person));

    for(i = 0; i < n; ++i)
    {
        printf("Enter the first name, age and weight respectively: ");
        scanf("%s %d %f", &(ptr+i)-> name, &(ptr+i)-> age, &(ptr+i)-> weight);
    }

    printf("Displaying Information: \n");
    for(i = 0; i < n; ++i)
        printf("Name: %s\tAge: %d\tWeight: %f\n", (ptr+i)-> name, (ptr+i)-> age, (ptr+i)-> weight);
    */
    return 0;
}

int fonk(int a, int b)
{
    if(a % 2 == 0)
        return a;
    else if(a % 5 == 0)
        return b;
    else
        return (a-b)* fonk(a-2, b+1);
}

