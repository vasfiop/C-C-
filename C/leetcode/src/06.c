#include <header.h>
#include <string.h>
#include <stdlib.h>

char *testMy(char *s, int numRows);
char *byZ(char *s, int numRows);

char *convert(char *s, int numRows)
{
    return byZ(s, numRows);
}
// 官方答案，按照z字形
// 按照与逐行读取 Z 字形图案相同的顺序访问字符串。
char *byZ(char *s, int numRows)
{
    if (numRows == 1)
        return s;
    int sSize = strlen(s);
    char *returnStr = (char *)malloc(sizeof(char) * sSize + 1);

    int cycleLen = 2 * numRows - 2;
    // 对于第0行，每个元素相差（2 * numRows - 2）个
    int count = 0;
    for (int i = 0; i < numRows; i++)                     // 这个是行数
        for (int j = 0; j + i < sSize + 1; j += cycleLen) // 这个是每行的差数
        {
            returnStr[count++] = s[j + i];
            if (i != 0 && i != numRows - 1 && j + cycleLen - i < sSize) // 判断当前行数不为第一行和最后一行
                returnStr[count++] = s[j + cycleLen - i];               // 计算当前行的下一位：j+cycleLen，然后减去差值i
        }
    returnStr[count] = '\0';

    return returnStr;
}
// 我自己寻思的
char *testMy(char *s, int numRows)
{
    if (numRows < 2)
        return s;
    char *dp[numRows];
    int sSize = strlen(s);
    for (int i = 0; i < numRows; i++)
        dp[i] = (char *)malloc(sizeof(char) * sSize + 1);

    for (int i = 0; i < numRows; i++)
        for (int j = 0; j < sSize + 1; j++)
            dp[i][j] = 0;

    int i, j;
    i = j = 0;
    int count = 0;
    while (s[count] != '\0')
    {
        dp[i++][j] = s[count++];
        if (i == numRows && s[count] != '\0')
        {
            i = numRows - 2;
            j++;
            for (int a = 0; a < numRows - 1; a++)
                dp[i--][j++] = s[count++];
            i += 2;
            j--;
        }
    }
    char *temp = (char *)malloc(sizeof(char) * sSize + 1);
    count = 0;
    for (int i = 0; i < numRows; i++)
        for (int j = 0; j < sSize + 1; j++)
            if (dp[i][j] != 0)
                temp[count++] = dp[i][j];
    temp[sSize] = '\0';

    return temp;
}