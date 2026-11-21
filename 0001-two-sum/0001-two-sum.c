/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
      int *reArr = (int *)malloc(2 * sizeof(int));

      int left = 0;
      int right = 1;
      while (left < numsSize - 1) {
        if (nums[left] + nums[right] == target) {
                  reArr[0] = left;
      reArr[1] = right;
            *returnSize = 2;
            return reArr;
        } else if (right == numsSize - 1) {
            left++;
            right = left + 1;
        } else {
            right++;
        }
      }

      *returnSize = 0;
      free(reArr);
      return NULL;
}