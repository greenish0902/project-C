#include <stdio.h>

int main() {
  int arr[] = {};
  printf("arr의 값: %d\n", arr);
  for (int i = 1; i <= 10; i++) {
    arr[i] = i + 1;
    printf("&arr[%d] = %d\n", i, &arr[i]);
    printf("arr + %d = %d\n", i, arr + i);
  }
  printf("\n");

  for (int *ptr = arr; ptr < arr + 10; ptr++) {
    printf("%d", *ptr);
  }
  printf("\n");
}