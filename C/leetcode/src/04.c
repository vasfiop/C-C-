/*
 * 目前有两个想法，第一个就是单纯的笨比想法，排序，然后算好中间的位置，然后加一下就ojbk
 * 第二个想法，使用递归进行二分法。但是我还没找到规律
 */
#include <stdlib.h>
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int *allnum = (int *)malloc(sizeof(int) * (nums1Size + nums2Size));
    
}