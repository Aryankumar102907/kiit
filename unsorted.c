#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the number of elements: ");
    int n = 0;
    scanf("%d",&n);

    int * arr;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        arr[i] = num; 
    }

    printf("Enter Lower Bound: ");
    int lb;
    scanf("%d", &lb);

    printf("Enter Upper Bound: ");
    int ub;
    scanf("%d", &ub);

    int count = 0;
    printf("\nElements between upper and lower bounds: ");
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) >= lb && *(arr + i) <= ub)
        {
            count++;
            printf("%d ",*(arr + i));
        }

    }
    printf("\nNumeber of elements between lb and ul: %d.\n", count);
    return 0;
}
