#include <stdio.h>

int factorial(int a)
{
    int i;
    int res = 1;
    for(i=0; i<a; i++)
    {
        res = res * (i+1);
    }

    return res;
}

int combination(int n, int r)
{
    int up, down;

    up = factorial(n);

    down = factorial(n-r) * factorial(r);

    return (up/down);
}

int main(void)
{
    int result;
    int n, r;

    printf("input n: ");
    scanf("%i", &n);

    printf("input r: ");
    scanf("%i", &r);

    result = combination(n, r);
    
    printf("The combination result is %i\n", result);

    return 0;
}