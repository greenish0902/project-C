#include <stdio.h>

int main() {
  int n, line = 1;
  scanf("%d", &n);

  while (line <= n) {
    for (int i = 1; i <= line*2-1 ; i++) {
      printf("%d ", i);
    }
    printf("\n");
    line++;
  }
}