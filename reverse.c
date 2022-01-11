#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    scanf("%s", &s);
    char r[10];

    int i, j = 0;
    for (i = strlen(s) - 1; i > -1; i--)
    {
        r[j++] = s[i];
    }

    printf("%s", r);

    return 0;
}