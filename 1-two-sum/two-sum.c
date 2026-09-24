/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL; 
    }

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                // FIX: Use brackets to modify array elements, not the pointer itself
                result[0] = i; 
                result[1] = j;
                return result; 
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

    
