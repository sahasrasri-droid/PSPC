#include <stdio.h>

int main()
{
    char name1[20], name2[20], name3[20], name4[20], name5[20];

    printf("Enter the names of five friends:\n");

    scanf("%19s %19s %19s %19s %19s",
          name1, name2, name3, name4, name5);

    printf("\nNames of your five friends are:\n");

    printf("%s\n%s\n%s\n%s\n%s\n",
           name1, name2, name3, name4, name5);

    return 0;
}
