/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *ret = NULL;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ret = (int*)malloc(sizeof(int) * 2);
                ret[0] = i;
                ret[1] = j;
                break;
            }
        }
        if (ret != NULL) {
            break;
        }
    }
    return ret;
}
