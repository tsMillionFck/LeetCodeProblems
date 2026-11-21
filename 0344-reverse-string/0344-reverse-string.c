void reverseString(char *arr, int arrSize) {
  int left = 0;
  int right = arrSize - 1;
  int temp;
  for (int i = 0; i < arrSize; i++) {
    if (left >= right) {
      break;
    }
    temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    left++;
    right--;
  }

  for (int i = 0; i < arrSize; i++) {
    printf("%c", arr[i]);
  }
}