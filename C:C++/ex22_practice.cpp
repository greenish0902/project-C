#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    int j = i % 10;
    if (j != 0 && j % 3 == 0) {
      printf("* ");
    } else {
      printf("%d ", i);
    }
  }
}