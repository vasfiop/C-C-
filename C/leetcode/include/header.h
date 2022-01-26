#ifndef _HEADER_H_
#define _HEADER_H_
#include <stdbool.h>
// 01
int *twoSum(int *nums, int numsSize, int target, int *returnSize);
// 02
struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2);
// 03
int lengthOfLongestSubstring(char *s);
// 04
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size);
// 05
char *longestPalindrome(char *s);
// 06
char *convert(char *s, int numRows);
// 09
bool isPalindrome(int x);
#endif