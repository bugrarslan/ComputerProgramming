#include <stdio.h>
#include <stdlib.h>

int i = 0, n = 10;

int f(int n, int *i) {
    if(n == 0)
        return *i;
    else{
        (*i)++;

        return n+f(n/2, i);
    }
}



int main()
{
    if(f(n, &i) || f(n*n, &i) || f(n*n*n, &i))
        n = f(n, &i);

    printf("%d %d", n, i);
    return 0;
}
