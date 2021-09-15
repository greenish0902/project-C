#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("%d\n", time(NULL)); // 1970-01-01 00:00:00 로부터 지난 시간, 초 단위로 반환
  
  srand(time(NULL));

  for (int i = 1; i <= 10; i++) {
    printf("%d\n", rand() % 10 + 1);
  }
}