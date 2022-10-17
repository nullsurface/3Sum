#include <stdlib.h>
#include <stdio.h>
#include "3Sum.h"

int main() {
    int numsSize = 6;
    int* nums = malloc(sizeof(int) * numsSize);
    int** output;
    int* returnSize = malloc(sizeof(int));
    int** returnColumnSizes = malloc(sizeof(int*));

    printf("Start Jawn\n");

    nums[0] = -1;
    nums[1] = 0;
    nums[2] = 1;
    nums[3] = 2;
    nums[4] = -1;
    nums[5] = -4;

    output = threeSum(nums, numsSize, returnSize, returnColumnSizes);
   
    for (int i = 0; i < *returnSize; i++) {
        for (int j = 0; j < (*returnColumnSizes)[i]; j++) {
            printf("%d ", output[i][j]);
        }
        free(output[i]);
        printf("\n");
    }

    free(nums);
    free(returnSize);
    free(output);
    free(*returnColumnSizes);
    free(returnColumnSizes);
    printf("End Jawn\n");

    return 0;
}

