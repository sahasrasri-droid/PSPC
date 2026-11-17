#include <stdio.h>

void prime(int n)
{
    int i, count = 0;

    if (n <= 1)
    {
        printf("%d is not a prime number", n);
        return;
    }

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    prime(n);

    return 0;
}
