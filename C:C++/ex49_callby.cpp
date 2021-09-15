#include <stdio.h>

void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int main() {
  int a, b;
  printf("정수 두 개를 입력하세요.\n");
  scanf("%d%d", &a, &b);
  swap(&a, &b);
  printf("a = %d\nb = %d\n", a, b);
}