#include <stdio.h>

int main() {
  FILE *in, *out; // 스트림; 파일을 가리키는 포인터
  int n;

  in = fopen("input.txt", "r"); // 입력 스트림 <- 읽기 전용으로 열기, 포인터를 반환
  out = fopen("output.txt", "w"); // 출력 스트림 <- 쓰기, (쓸 파일의) 포인터를 반환

  fscanf(in, "%d", &n); // 파일로부터 입력 받기
  fprintf(out, "%d\n", n);
  printf("%d\n", n);

  fclose(in);
  fclose(out);
}