#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lengthOfLongestSubstring(char *s)
{
    int startPos, endPos, returnSize;
    startPos = endPos = returnSize = 0;
    char map[128] = {0};
    map[s[startPos]] = 1; // 哈希算法 精彩+++

    while (s[endPos] != '\0')
    {
        returnSize = returnSize > (endPos - startPos + 1) ? returnSize : (endPos - startPos + 1);
        endPos++;
        while (map[s[endPos]])
        {
            map[s[startPos]] = 0;
            startPos++;
        }
        map[s[endPos]] = 1;
    }

    return returnSize;
}