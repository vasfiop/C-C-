#include <header.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void mytest88(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n);

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    mytest88(nums1, nums1Size, m, nums2, nums2Size, n);
}

void mytest88(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int i, j;
    for (i = m, j = 0; i < nums1Size; i++, j++)
        nums1[i] = nums2[j];
    qsort(nums1, nums1Size, sizeof(int), cmp);
}