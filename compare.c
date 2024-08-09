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
    printf("%d is smaller than %d.\n",x ,y);
    return 0;
}

void compare(int *a, int *b)
{
    if (*a > *b)
    {
        int temp;
        temp = *b;
        *b = *a;
        *a = temp;
    }
    else if (*a == *b)
    {
        printf("Not defined yet!\n");
    }
    else
    {
        return;
    }
}
