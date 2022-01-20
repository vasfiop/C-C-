/*
 * 目前有两个想法，第一个就是单纯的笨比想法，排序，然后算好中间的位置，然后加一下就ojbk
 * 第二个想法，使用递归进行二分法。但是我还没找到规律
 */
#include <stdlib.h>
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int *allnum = (int *)malloc(sizeof(int) * (nums1Size + nums2Size));
    int allSize = nums1Size + nums2Size;
    int i;
    int middlePos = allSize / 2;

    for (i = 0; i < nums1Size; i++)
        allnum[i] = nums1[i];
    for (int j = 0; j < nums2Size; j++, i++)
        allnum[i] = nums2[j];

    for (int i = 0; i < allSize - 1; i++)
    {
        int bigPos = i;
        for (int j = i + 1; j < allSize; j++)
        {
            if (allnum[bigPos] > allnum[j])
                bigPos = j;
        }
        if (bigPos != i)
        {
            int middle = allnum[bigPos];
            allnum[bigPos] = allnum[i];
            allnum[i] = middle;
        }
    }

    if (allSize % 2 == 0)
    {
        double cc = (double)(allnum[middlePos] + allnum[middlePos - 1]) / (double)2.0;
        printf("first printf : %lf\n", cc);
        return cc;
    }

    else
        return (double)allnum[middlePos];
}