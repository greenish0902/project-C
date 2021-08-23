#include <stdio.h>

int main() {
  int i = 1;

  // while 문 
  while (i <= 10) {
    printf("%d\n", i);
    i++;
  }

  // do-while 문
  do{
    printf("%d\n", i);
    i++;
  } while(i <= 10);

  // 무한 반복
  while(!true){
    printf("%d", i);
    i++;
  }
}