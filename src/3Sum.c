#include "3Sum.h"

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    for (int i = 0; i < sumsSize; i++) {
        for (int j = 1; j < i; j++) {
            for (int k = 2; k < j; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    *returnSize++;
                    
                }
            }
        }
    }
}

