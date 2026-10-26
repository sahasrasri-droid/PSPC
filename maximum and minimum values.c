
#include <stdio.h>

int main()
{
    int a[5], i;
    int min, max;

    printf("Enter 5 values:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }

    printf("Min value = %d\n", min);
    printf("Max value = %d\n", max);

    return 0;
}

