# include <stdio.h>
# include <stdlib.h>

int main ()
{
    void compare(int *, int *);
    printf("Enter Num 1: ");
    int x = 0;
    scanf("%d",&x);

    printf("Enter Num 2: ");
    int y = 0;
    scanf("%d",&y);

    compare(&x, &y);
    return 0;
}

void compare(int *a, int *b)
{
    if(*a > *b)
    {
        printf("%d is greater than %d.\n", *a, *b);
    }
    else if (*a == *b)
    {
        printf("Numbers are equal.\n");
    }
    else
    {
        printf("%d is greater than %d.\n", *b, *a);
    }
    return;
}