#include <stdio.h>

int main()
{
    char str[100];
    int lines = 0, words = 0, characters = 0;
    int i, inword = 0;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
            characters++;

        if (str[i] == '\n')
            lines++;

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            inword = 0;
        else if (inword == 0)
        {
            words++;
            inword = 1;
        }
    }

    if (characters > 0 && str[i - 1] != '\n')
        lines++;

    printf("Number of lines = %d\n", lines);
    printf("Number of words = %d\n", words);
    printf("Number of characters = %d\n", characters);

    return 0;
}
