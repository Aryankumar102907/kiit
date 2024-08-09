#include <stdio.h>
#include <stdlib.h>

int main()
{
    void large(int *, int);
    void small(int *, int);
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

    large(arr, n);
    small(arr, n);
    return 0;
}

void large(int *arr, int size)
{
    int  l = *(arr);
    for (int i = 0; i < size; i++)
    {
        if(*(arr + i) > l)
        {
            l = *(arr + i);
        }
    }
    printf("Largest element in array: %d.\n",l);
}

void small(int *arr, int size)
{
    int  s = *(arr);
    for (int i = 0; i < size; i++)
    {
        if(*(arr + i) < s)
        {
            s = *(arr + i);
        }
    }
    printf("Smallest element in array: %d.\n",s);
}
