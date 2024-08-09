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

    // for (int i = 0; i < n; i++)
    // {
    //     int num = 0;
    //     printf("%d.\n", *(arr+i));
    // }
    int odd_sum = 0;
    int even_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr+i) % 2 == 0)
        {
            even_sum += *(arr+i);
        }
        else
        {
            odd_sum += *(arr+i);
        }
    }
    printf("Sum of even numbers in the array: %d.\n", even_sum);
    printf("Sum of odd numbers in the array: %d.\n", odd_sum);

    return 0;
}
