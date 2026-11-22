int removeDuplicates(int *nums, int size) {
  int left = 0;

  if (size == 0) {
    return 0;
  }

  for (int right = 1; right < size; right++) {
    if (nums[left] != nums[right]) {
      left++;
      nums[left] = nums[right];
    }
  }

  return left + 1;
}