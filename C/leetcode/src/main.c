#include <stdio.h>
#include <header.h>
int main()
{
    int nums1[2] = {1, 2};
    int nums2[2] = {3, 4};

    double cc1 = 0;

    cc1 = findMedianSortedArrays(nums1, 2, nums2, 2);
    printf("%lf\n", cc1);

    return 0;
}
