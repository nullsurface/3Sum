#include "3Sum.h"
#include <stdlib.h>
#include <stdio.h>

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    *returnSize = 0; // Init returnSize
    int** triples = malloc(sizeof(int*) * numsSize * numsSize * numsSize); // Set 
    *returnColumnSizes = malloc(sizeof(int*) * numsSize * numsSize * numsSize);
    int* curTriple = malloc(sizeof(int) * 3);
    for (int i = 2; i < numsSize; i++) {
        for (int j = 1; j < i; j++) {
            for (int k = 0; k < j; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    curTriple[0] = nums[i];
                    curTriple[1] = nums[j];
                    curTriple[2] = nums[k];
                    threeSort(curTriple);   // Sort current triple for easy comparing now
                    if (isUnique(triples, returnSize, curTriple)) {
                        triples[*returnSize] = malloc(sizeof(int) * 3);
                        triples[*returnSize][0] = nums[i];
                        triples[*returnSize][1] = nums[j];
                        triples[*returnSize][2] = nums[k];
                        threeSort(triples[*returnSize]);    // Sort the triple for easy comparing later
                        (*returnColumnSizes)[*returnSize] = 3;
                        *returnSize = *returnSize + 1;
                    }
                }
            }
        }
    }

    free(curTriple);

    return triples;
}

// Checks if triplet is unique in the collected list
int isUnique(int** triples, int* returnSize, int* currentTriple) {
    for (int i = 0; i < *returnSize; i++) {
        if (triples[i][0] == currentTriple[0] && triples[i][1] == currentTriple[1])
            return 0;
    }

    return 1;
}

void threeSort(int* triple) {
    int cont = 0;
    int i = 0;
    while (cont < 2) {
        if (i == 2) {
            i = 0;
            cont = 0;
        }

        if (triple[i] > triple[i+1]) {
            triple[i] = triple[i] + triple[i+1];
            triple[i+1] = triple[i] - triple[i+1];
            triple[i] = triple[i] - triple[i+1];
        } else {
            cont++;
        }

        i++;
    } }
