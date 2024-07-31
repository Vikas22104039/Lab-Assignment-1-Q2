#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    char str[MAX_LENGTH];
    int length, i;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    str[strcspn(str, "\n")] = 0;

    length = strlen(str);

    for (i = 0; i < length / 2; ++i)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
