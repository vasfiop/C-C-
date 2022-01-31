#include <stdio.h>
#include <header.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int returnSize;
    int digits[1] = {9};
    int *ans;

    ans = plusOne(digits, 1, &returnSize);
    for (int i = 0; i < returnSize; i++)
        printf("%d", ans[i]);

    free(ans);

    return 0;
}