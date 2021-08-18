#include <stdio.h>

int main() {
  float a, b;
  scanf("%f %f", &a, &b);
  printf("두 숫자의 합은 %.2f 입니다. \n(소수점 아래 셋째 자리에서 반올림)", a+b);
}
