#include <stdio.h>

int main() {
  int arr[3] = {1, 2, 3};

  int (*ptr_arr)[3]; // 길이 3인 Int형 배열을 가리키는 포인터를 선언
  ptr_arr = &arr;  // 동시에 선언 & 대입도 가능 (int *(ptr_arr)[3] = &arr;)

  for (int i = 0; i < 3; i++) {
    printf("%d\n", (*ptr_arr)[i]);
  }
}