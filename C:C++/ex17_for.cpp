#include <stdio.h>

int main() {
  for (int i=1; ; i++) {
    int k;
    scanf("%d", &k);
    if (k == 0) {
      break;
    }
    printf("%d번째: %d\n", i, k);
  }

  int sum = 0, n;
  scanf("%d", &n);
  for (int j = 1; j <= n; j++) {
    if (j % 3 != 0) {
      continue;
    }
    sum += j;
  }
  printf("%d\n", sum);
}