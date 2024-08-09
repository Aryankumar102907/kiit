#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0;
    printf("Size 1: ");
    scanf("%d",&m);

    int * arr1;
    arr1 = (int *)malloc(m * sizeof(int));
    if (arr1 == NULL)
    {
        return 1;
    }
    for (int i = 0; i < m; i++)
    {
        int num = 0;
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        arr1[i] = num; 
    }

    int n = 0;
    printf("Size 2: ");
    scanf("%d",&n);

    int * arr2;
    arr2 = (int *)malloc(n * sizeof(int));
    if (arr2 == NULL)
    {
        return 1;
    }
    for (int j = 0; j < n; j++)
    {
        int num = 0;
        printf("Enter number %d: ", j+1);
        scanf("%d", &num);
        arr2[j] = num; 
    }

    int * arr3;
    arr3 = (int *)malloc((m + n) * sizeof(int));
    if (arr3 == NULL)
    {
        return 1;
    }

    int counter = 0;
    for (int k = 0; k < (m + n); k++)
    {
        if(counter < m)
        {
            arr3[k] = *(arr1 + k);
            counter++;
        }

        if (counter >= m && counter < m+n)
        {
            arr3[k] = *(arr1 + (counter - 1));
        }
    }

    for (int p = 0; p < (m + n); p++)
    {
        printf("%d ",*(arr3 + p));
    }
}
