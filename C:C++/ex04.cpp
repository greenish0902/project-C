#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b); // &: 포인터
  printf("%d + %d = %d\n", a, b, a+b);

  float a, b;
  scanf_s("%f%f", &a, &b); // &: 포인터
  printf("%f + %f = %f\n", a, b, a+b);
}