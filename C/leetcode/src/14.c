#include <header.h>
#include <string.h>
#include <stdlib.h>

char *myTest_14(char **strs, int strsSize);

char *longestCommonPrefix(char **strs, int strsSize)
{
    return myTest_14(strs, strsSize);
}
// 自己尝试，第二次修改
char *myTest_14(char **strs, int strsSize)
{
    if (strsSize == 1)
        return strs[0];

    int minSize = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++)
        minSize = minSize > strlen(strs[i]) ? strlen(strs[i]) : minSize;

    int i = 0;
    for (i = 0; i < minSize; i++)
    {
        for (int j = 0; j < strsSize; j++)
        {
            if (j != 0 && strs[j][i] != strs[j - 1][i])
            {
                char *returnStr = (char *)malloc(sizeof(char) * i + 1);
                strncpy(returnStr, strs[0], i);
                returnStr[i] = '\0';
                return returnStr;
            }
        }
    }

    char *returnStr = (char *)malloc(sizeof(char) * minSize + 1);
    strncpy(returnStr, strs[0], minSize);
    returnStr[minSize] = '\0';

    return returnStr;
}