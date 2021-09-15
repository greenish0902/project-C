#include <stdio.h>

int main() {

  int inputNum;
  char inputChar;

  printf("ASCII CODE로 변환할 숫자와 문자를 차례로 입력해 주세요. \n");
  scanf("%d %c", &inputNum, &inputChar);
  printf("ASCII CODE of your num '%d' is '%c' \n", inputNum, (char)inputNum);
  printf("ASCII CODE of your char '%c' is '%d' \n", (int)inputChar, inputChar);

}