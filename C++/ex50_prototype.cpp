// prototype: 원형, 시제품
// C언어에서는 함수의 원형을 미리 적어두고 나중에 정의하는 것

#include <stdio.h>

void walk(int);
void rotate(int);
void drawSquare();

int main() {
  drawSquare();
}

void walk(int distance) {
  printf("%d cm walked\n", distance);
}

void rotate(int angle) {
  printf("%d degree rotated\n", angle);
}

void drawSquare() {
  for (int i = 1; i < 4; i++) {
    walk(10);
    rotate(90);
  }
}
