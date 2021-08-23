#include <stdio.h>

int main() {
  int i;
  scanf("%d", &i);
  for (int j = 0, k = 1; j <= i; j++, k *= i) {
    printf("%d^%d = %d\n", i, j, k);
  }
}