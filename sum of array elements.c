
#include <stdio.h>

int main()
{
    int a[100], i, n, sum = 0;

    printf("Enter no of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The sum of array values\n");

    i = 0;
    while(i < n)
    {
        sum = sum + a[i];
        i++;
    }

    printf("sum = %d\n", sum);

    return 0;
}
