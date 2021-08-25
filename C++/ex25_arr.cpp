#include <stdio.h>

int main() {
  int arr[] = {3, 1, 4, 1, 5, 9, 2};
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}