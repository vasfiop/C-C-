#include <header.h>
#include <string.h>
int myStest(char *s);
int reallyAnswer(char *s);
int romanToInt(char *s)
{
    return reallyAnswer(s);
}
// 官方答案
int reallyAnswer(char *s)
{
    int symbolValues[26];
    symbolValues['I' - 'A'] = 1;
    symbolValues['V' - 'A'] = 5;
    symbolValues['X' - 'A'] = 10;
    symbolValues['L' - 'A'] = 50;
    symbolValues['C' - 'A'] = 100;
    symbolValues['D' - 'A'] = 500;
    symbolValues['M' - 'A'] = 1000;
    int ans = 0;
    int n = strlen(s);
    for (int i = 0; i < n; ++i)
    {
        int value = symbolValues[s[i] - 'A'];
        if (i < n - 1 && value < symbolValues[s[i + 1] - 'A'])
            ans -= value; //例如 XIV 可看成 X-I+V = 10-1+5
        else
            ans += value;
    }
    return ans;
}
// 我自己尝试
int myStest(char *s)
{
    int Roman[128] = {0};
    Roman['I'] = 1;
    Roman['V'] = 5;
    Roman['X'] = 10;
    Roman['L'] = 50;
    Roman['C'] = 100;
    Roman['D'] = 500;
    Roman['M'] = 1000;

    int sSize = strlen(s);
    int returnNum = 0;

    for (int i = 0; i < sSize; i++)
    {
        if (Roman[s[i]] < Roman[s[i + 1]])
        {
            returnNum += (Roman[s[i + 1]] - Roman[s[i++]]);
            continue;
        }
        returnNum += Roman[s[i]];
    }

    return returnNum;
}