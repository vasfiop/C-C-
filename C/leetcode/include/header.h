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
// 13
int romanToInt(char *s);
// 14
char *longestCommonPrefix(char **strs, int strsSize);
// 20
bool isValid(char *s);
// 21
struct ListNode
{
    int val;
    struct ListNode *next;
};
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2);
// 26
int removeDuplicates(int *nums, int numsSize);

#endif