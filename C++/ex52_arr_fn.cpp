#include <stdio.h>

void printArr(int arr[4]) {
  for (int i = 0; i < 4; i++) {
    arr[i] *= 2;
  }
}

int main() {
  int arr[4] = { 1, 2, 3, 4};
  printArr(arr);
  for (int i = 0; i < 4; i++) {
    printf("%d ", arr[i]);
  }
}