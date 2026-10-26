
#include <stdio.h>

int main()
{
    int a[100], i, n;
    int e_sum = 0, e_count = 0;
    int o_sum = 0, o_count = 0;
    float e_avg, o_avg;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            e_sum = e_sum + a[i];
            e_count++;
        }
        else
        {
            o_sum = o_sum + a[i];
            o_count++;
        }
    }

    if(e_count > 0)
    {
        e_avg = (float)e_sum / e_count;
        printf("Average of even numbers = %.2f\n", e_avg);
    }
    else
    {
        printf("No even numbers\n");
    }

    if(o_count > 0)
    {
        o_avg = (float)o_sum / o_count;
        printf("Average of odd numbers = %.2f\n", o_avg);
    }
    else
    {
        printf("No odd numbers\n");
    }

    return 0;
}

