#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int myTest_27(int *nums, int numsSize, int val);
int doublePosUp(int *nums, int numsSize, int val);

int removeElement(int *nums, int numsSize, int val)
{
    return myTest_27(nums, numsSize, val);
}
// 官方双指针优化+(我自己优化了一点点)
int doublePosUp(int *nums, int numsSize, int val)
{
    int left = 0, right = numsSize - 1;

    while (left <= right)
    {
        if (nums[left] == val)
        {
            if (nums[right] != val)
                nums[left++] = nums[right--];
            else
                right--;
        }
        // if (nums[left] == val)
        //     nums[left] = nums[right--];
        else
            left++;
    }

    return left;
}
// 自己尝试
int myTest_27(int *nums, int numsSize, int val)
{
    int left, right;

    for (left = 0, right = 0; right < numsSize; right++)
    {
        if (nums[right] != val)
            nums[left++] = nums[right];
    }

    return left;
}
