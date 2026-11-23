
int removeElement(int *nums, int size, int val) {
  int left = 0;
  int right = 0;

  for (; right < size; right++) {
    if (nums[right] != val) {
      nums[left] = nums[right];
      left++;
    }
  }
  return left;
}