# include <stdio.h>
# include <stdlib.h>

int main ()
{
    void swap(int *, int *);
    printf("Enter Num 1: ");
    int x = 0;
    scanf("%d",&x);
    printf("Enter Num 2: ");
    int y = 0;
    scanf("%d",&y);
    printf("Before Swap: (%d, %d).\n",x ,y);
    swap(&x, &y);
    printf("After Swap: (%d, %d).\n",x ,y);
    return 0;
}

void swap(int *a, int *b)
{
    if (*a != *b)
    {
        int temp;
        temp = *b;
        *b = *a;
        *a = temp;
    }
    else
    {
        printf("Equal\n");
        return;
    }
}
