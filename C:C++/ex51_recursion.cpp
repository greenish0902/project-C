#include <stdio.h>

int fac(int n) {
  if (n == 1) {
    return 1;
  }
  return n*fac(n-1);
}

int main() {
  printf("%d\n", fac(10));
}