#include <stdio.h>

struct Point {
  int x, y;
  void moveRight() { x++; }
  void moveLeft() { x--; }
  void moveUp() { y++; }
  void moveDown() { y--; }
};

int main() {
  Point p = { 2, 5 };
  p.moveUp();
  p.moveRight();
  p.moveDown();
  p.moveUp();
  p.moveLeft();
  p.moveLeft();
  printf("(%d, %d)\n", p.x, p.y);
}