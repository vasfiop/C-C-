#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int removeDuplicates(int *nums, int numsSize)
{
    int right, left;
    if (numsSize < 2)
        return numsSize;
    left = 0;
    for (right = 1; right < numsSize; right++)
    {
        if (nums[right] != nums[left])
            nums[++left] = nums[right];
    }

    return left + 1;
}