/**
 * 4. 寻找两个有序数组的中位数

给定两个大小为 m 和 n 的有序数组 nums1 和 nums2。

请你找出这两个有序数组的中位数，并且要求算法的时间复杂度为 O(log(m + n))。

你可以假设 nums1 和 nums2 不会同时为空。

示例 1:

nums1 = [1, 3]
nums2 = [2]

则中位数是 2.0

示例 2:

nums1 = [1, 2]
nums2 = [3, 4]

则中位数是 (2 + 3)/2 = 2.5
 */ 

#include<stdio.h>
#include<malloc.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    if (nums1Size < nums2Size) {
        int *temp = nums1;
        int tempSize = nums1Size;
        nums1 = nums2;
        nums1Size = nums2Size;
        nums2 = temp;
        nums2Size = tempSize;
    }
    int min = (nums1Size + nums2Size) / 2;
    int max = 0;
    if (nums1[min] <= nums2[max]) {
        
    }
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
