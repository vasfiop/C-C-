#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdbool.h>

int cmp(const int *a, const int *b);

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
struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2);
// 26
int removeDuplicates(int *nums, int numsSize);
// 27
int removeElement(int *nums, int numsSize, int val);
// 28
int strStr(char *haystack, char *needle);
// 35
int searchInsert(int *nums, int numsSize, int target);
// 53
int maxSubArray(int *nums, int numsSize);
// 58
int lengthOfLastWord(char *s);
// 66
int *plusOne(int *digits, int digitsSize, int *returnSize);
// 67
char *addBinary(char *a, char *b);
// 69
int mySqrt(int x);
// 70
int climbStairs(int n);
// 88
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n);
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
// 94
int *inorderTraversal(struct TreeNode *root, int *returnSize);
// 100
bool isSameTree(struct TreeNode *p, struct TreeNode *q);
// 101
bool isSymmetric(struct TreeNode *root);
// 104
int maxDepth(struct TreeNode *root);
// 108
struct TreeNode *sortedArrayToBST(int *nums, int numsSize);
// 110
bool isBalanced(struct TreeNode *root);
// 409
int longestPalindrome409(char *s);
// 455
int findContentChildren(int *g, int gSize, int *s, int sSize);

// unit
int cmp(const int *a, const int *b);

#endif