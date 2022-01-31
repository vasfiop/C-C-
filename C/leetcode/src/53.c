#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int myTest_53(int *nums, int numsSize);

int maxSubArray(int *nums, int numsSize)
{
    return myTest_53(nums, numsSize);
}
// 贪心
int myTest_53(int *nums, int numsSize)
{

    int sum = nums[0];
    int answer = nums[0];

    for (int i = 1; i < numsSize; i++)
    {
        sum = fmax(nums[i], sum + nums[i]);
        answer = fmax(sum, answer);
    }

    return answer;
}