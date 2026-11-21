#include "ctype.h"
#include "stdio.h"
#include "string.h"

int removeNonAlphaanumeric(char *cha, int strLenght) {
  int write = 0;

  for (int read = 0; read <= strLenght; read++) {
    if (isalnum((unsigned char)cha[read])) {
      cha[write] = tolower((unsigned char)cha[read]);
      write++;
    }
  }

  cha[write] = '\0';
  return write;
}

int cheakPalidorme(char *cha, int strLen) {
  int left = 0;
  int right = strLen - 1;

  while (left < right) {
    if (cha[left] != cha[right]) {
      return 0;
    }

    left++;
    right--;
  }

  return 1;
}

bool isPalindrome(char *s) {

  int strLen = strlen(s) - 1;
  int write = removeNonAlphaanumeric(s, strLen);
  int check = cheakPalidorme(s, write);

  return check;
}
