#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  if(n%2 == 0) {
    printf("n은 짝수입니다\n");
  } else {
    printf("n은 홀수입니다\n");
  }
}