#include <stdio.h>

int main() {
  int arr[3][3] = { 0 };

  printf("1. %d\n", &arr[0][0]); // a

  printf("2. %d\n", arr[0] + 1); // a + 4 (arr[0] == 배열 내 첫 번째 칸의 주소 == &arr[0][0])
  printf("3. %d\n", &arr[0] + 1); // a + 12
  printf("4. %d\n", arr + 1); // a + 12 (arr == 배열 전체, 배열의 첫 번째 요소 == 첫 번째 행. 행 + 1 이므로 +12)
  printf("5. %d\n", &arr + 1); // a + 36

  // 즉, &가 없는 경우 앞에 &와 뒤에 [0]을 붙여서 생각.
  // arr == &arr[0]
  // arr[0] == &arr[0][0]
}