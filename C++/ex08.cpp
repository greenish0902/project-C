#include <stdio.h>

int main() {
  char alpha;
  printf("알파벳을 입력해 주세요: ");
  scanf("%c", &alpha);
  printf("%c", (int)(alpha+1));
}