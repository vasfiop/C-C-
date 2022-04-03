#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int mytest516(int *nums, int numsSize);

int arrayPairSum(int *nums, int numsSize)
{
    return mytest516(nums, numsSize);
}
int mytest516(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), cmp);

    int ans = 0;
    for (int i = 0; i < numsSize; i += 2)
        ans += nums[i];

    return ans;
}