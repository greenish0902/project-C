#include <stdio.h>

int main() {
  int n, d, j = 1;
  printf("수열을 이루는 수의 개수와 간격을 차례로 설정해 주세요.");
  scanf("%d %d", &n, &d);
  while(j <= n) {
    for (int i = 1; i <= j; i++) {
      printf("%d ", d*i - 1);
    }
    printf("\n");
    j++;
  }
}