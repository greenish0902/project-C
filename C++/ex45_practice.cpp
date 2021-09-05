#include <stdio.h>

int main() {
  int arr[3][3] = { 0 };

  printf("%d\n", &arr); // 이차원 배열 전체 -> 첫번째 주소 1637204
  printf("%d\n", arr); // 첫 번째 행 -> 첫번째 주소 1637204
  printf("%d\n", *arr); // *arr == arr[0]을 주소로 보고 값을 출력 -> 첫번째 주소 1637204

  printf("%d\n", &arr[0]); // 첫행주소 1637204
  printf("%d\n", arr[0]); // 첫행 출력 -> 첫번째 요소 1637204
  printf("%d\n", *arr[0]); // 첫행 주소의 내부 값(*) -> 0

  printf("%d\n", &arr[0][0]); // 첫 칸의 주소값

  printf("%d\n", arr[0][0]); // 배열 내부 값 0
}