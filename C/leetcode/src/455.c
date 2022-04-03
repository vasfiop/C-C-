#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int mytest455(int *g, int gSize, int *s, int sSize);

int findContentChildren(int *g, int gSize, int *s, int sSize)
{
    return mytest455(g, gSize, s, sSize);
}

int mytest455(int *g, int gSize, int *s, int sSize)
{
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);

    int g_pos = 0;
    int s_pos = 0;
    int ans = 0;
    while (g_pos < gSize && s_pos < sSize)
    {
        while (s_pos < sSize && g[g_pos] > s[s_pos])
            s_pos++;
        if (s_pos < sSize)
            ans++;

        g_pos++;
        s_pos++;
    }

    return ans;
}