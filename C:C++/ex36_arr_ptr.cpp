#include <stdio.h>

int main() {
  int arr[3] = {1, 2, 3};
  int *ptr = arr;

  // arr[i] = *(arr + i) = *(ptr + i) = *(i + ptr)

  for (int i = 0; i < 3; i++) {
    printf("%d ", *(ptr+i));
  }
  printf("\n");

  for (int i = 0; i < 3; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");

  //  C 언어는 a[b] = *(a + b) 로 인식하고 실행

  for (int i = 0; i < 3; i++) {
    printf("%d ", i[ptr]);
  }
  printf("\n");
}