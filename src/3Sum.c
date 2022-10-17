#include "3Sum.h"
#include <stdlib.h>
#include <stdio.h>

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    *returnSize = 0; // Init returnSize
    int** triples = malloc(sizeof(int*) * numsSize * numsSize * numsSize); // Set 
    *returnColumnSizes = malloc(sizeof(int*) * numsSize * numsSize * numsSize);
    for (int i = 2; i < numsSize; i++) {
        for (int j = 1; j < i; j++) {
            for (int k = 0; k < j; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    triples[*returnSize] = malloc(sizeof(int) * 3);
                    triples[*returnSize][0] = nums[i];
                    triples[*returnSize][1] = nums[j];
                    triples[*returnSize][2] = nums[k];
                    (*returnColumnSizes)[*returnSize] = 3;
                    *returnSize = *returnSize + 1;
                }
            }
        }
    }

    return triples;
}

