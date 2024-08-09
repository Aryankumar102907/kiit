// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int minimum(int , int);
    int a, b, c, d;
    printf("Num 1: ");
    scanf("%d",&a);
    printf("Num 2: ");
    scanf("%d",&b);
    int p = minimum(a ,b);
    printf("Num 3: ");
    scanf("%d",&c);
    printf("Num 4: ");
    scanf("%d",&d);
    int q = minimum(c ,d);

    int r = minimum(p ,q);
    printf("Smallest number among four integers: %d.\n",r);
    return 0;
}

int minimum(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}