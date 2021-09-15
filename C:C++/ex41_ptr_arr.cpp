#include <stdio.h>

int main() {
  int arr[4] = {1, 2, 3, 4};
  // int (*ptr)[4]; // 배열 포인터: 배열을 가리키는 포인터
  int *ptr[4]; // 괄호를 지우면!! 포인터 배열: 포인터들의 배열

  for (int i = 0; i < 4; i++) {
    ptr[i] = &arr[i];
  }

  for (int i = 0; i < 4; i++) {
    printf("%d ", *ptr[i]);
  }
  printf("\n");
}