#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int mytest409(char *s);

int longestPalindrome409(char *s)
{
    return mytest409(s);
}
int mytest409(char *s)
{
    int map[128] = {0};

    int size = strlen(s);

    for (int i = 0; i < size; i++)
        map[s[i]]++;

    int double_count = 0;
    for (int i = 0; i < 128; i++)
    {
        // if (map[i] > 2 && map[i] % 2 == 1) // 大于2 的奇数
        //     double_count += map[i] - 1;
        // else if (map[i] % 2 == 0 && map[i]) // 2的倍数
        //     double_count += map[i];
        double_count += map[i] / 2 * 2;
        if (map[i] % 2 == 1 && double_count % 2 == 0)
            double_count++;
    }

    return double_count;
}