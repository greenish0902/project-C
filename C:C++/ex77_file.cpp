#include <stdio.h>

int main() {
  FILE *in;
  int n;

  in = fopen("intput.txt", "r"); // 잘못 입력한 것의 예시
  
  if (in != nullptr) {
    fscanf(in, "%d", &n);
    printf("%d\n", n);
  }

  fclose(in);
}