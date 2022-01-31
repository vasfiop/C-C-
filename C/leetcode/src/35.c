#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int myTest_35(int *nums, int numsSize, int target);
int myFind_35(int *nums, int left, int right, int target);

int searchInsert(int *nums, int numsSize, int target)
{
    return myTest_35(nums, numsSize, target);
}
// 二分查找
int myTest_35(int *nums, int numsSize, int target)
{
    int left, right;
    left = 0;
    right = numsSize - 1;
    int ans = numsSize;

    while (left <= right)
    {
        int mid = ((right - left) >> 1) + left; // 等价于 int mid = (right+left)/2;
        if (target <= nums[mid])
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }

    return ans;
}