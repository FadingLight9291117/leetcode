#include<stdio.h>
#include<malloc.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/**
 * 1. 两数之和

给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

示例:

给定 nums = [2, 7, 11, 15], target = 9

因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]


 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result = (int *)malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i ++) {
        for (int j = i + 1; j < numsSize; j ++) {
            int num = nums[i] + nums[j];
            if (num == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 2;
    return result;
}

int main(int argc, char const *argv[])
{
    int a[] = {2,4,2,1,2};
    int *returnSize;
    int *b = twoSum(a, 4, 6, returnSize);
    printf("one: %d, two: %d", b[0], b[1]);
    return 0;
}
