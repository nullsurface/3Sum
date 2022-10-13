#include <stdlib.h>
#include "3Sum.h"

int main() {
    int numsSize = 6;
    int* nums = malloc(sizeof(int) * numsSize);
    int** output;
    int* returnSize;
    int** returnColumSizes;

    nums[0] = -1;
    nums[1] = 0;
    nums[2] = 1;
    nums[3] = 2;
    nums[4] = -1;
    nums[5] = -4;

    output = threeSum(nums, numsSize, returnSize, returnColumSizes);

    return 0;
}

