#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char *myTest_67(char *a, char *b);

char *addBinary(char *a, char *b)
{
    return myTest_67(a, b);
}

// 官方解答——1
char *myTest_67(char *a, char *b)
{
    reserve(a);
    reserve(b);

    int len_a = strlen(a), len_b = strlen(b);
    int n = fmax(len_a, len_b), carry = 0, len = 0;
    char *ans = (char *)malloc(sizeof(char) * (n + 2));
    for (int i = 0; i < n; ++i)
    {
        carry += i < len_a ? (a[i] == '1') : 0;
        carry += i < len_b ? (b[i] == '1') : 0;
        ans[len++] = carry % 2 + '0';
        carry /= 2;
    }

    if (carry)
    {
        ans[len++] = '1';
    }
    ans[len] = '\0';
    reserve(ans);

    return ans;
}
void reserve(char *s)
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        char t = s[i];
        s[i] = s[len - i - 1], s[len - i - 1] = t;
    }
}