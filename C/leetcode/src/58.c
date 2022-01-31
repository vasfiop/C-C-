#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int myTest_58(char *s);

int lengthOfLastWord(char *s)
{
    return myTest_58(s);
}
int myTest_58(char *s)
{
    if (strstr(s, " ") == NULL)
        return strlen(s);

    int count = 0;
    int sSize = strlen(s);

    int i;
    for (i = sSize - 1; i >= 0; i--)
        if (s[i] != ' ')
            break;

    while (i >= 0 && s[i--] != ' ')
        count++;

    return count;
}
