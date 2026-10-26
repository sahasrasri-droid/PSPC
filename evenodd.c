
#include <stdio.h>

int main()
{
    int a[100], i, n;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Element = ");
        scanf("%d", &a[i]);
    }

    printf("Elements at even index:\n");

    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t", a[i]);
        }
    }

    printf("\nElements at odd index:\n");

    for(i = 0; i < n; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t", a[i]);
        }
    }

    return 0;
}

