#include <stdio.h>

int parity(int n) {
  if (n%2 == 0) {
    return 0;
  } else {  // 생략가능
    return 1;
  }
}

int main() {
  printf("%d\n", parity(5));
  printf("%d\n", parity(-3));
  printf("%d\n", parity(6));
}