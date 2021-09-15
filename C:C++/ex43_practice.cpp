#include <stdio.h>

int main() {
  int n;
  int arr[105]; // 넉넉하게

  printf("입력할 숫자의 개수를 입력하세요\n");
  scanf("%d", &n);

  printf("%d개의 정수를 입력하세요\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 1; i < n; i += 2) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < n; i += 2) {
    printf("%d ", arr[i]);
  }
}
