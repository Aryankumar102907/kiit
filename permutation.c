#include <stdio.h>
#include <stdlib.h>

long long int factorial(int);

int main ()
{
    void permutation(int, int);
    int n = 0, r = 0;
    printf("Enter n: ");
    scanf(" %d",&n);
    printf("Enter r: ");
    scanf(" %d",&r);
    permutation(n, r);
}

void permutation(int n, int r)
{
    long long int x = factorial(n);
    printf("%lld.\n",x);
    long long int y = factorial(n-r);
    printf("%lld.\n",y);
    long long int result = x / y ;
    printf("Permutation result: %lld.\n",result);
}

long long int factorial(int f)
{
    if(f == 0 || f == 1)
    {
        return 1;
    }
    return f*factorial(f-1);
}

