#include <stdio.h>

struct Point { int x, y; }; // 같은 표현 더 짧게!
// typedef struct { int x, y ; } Point;  

int main() {
  Point p;
  p.x = 3;
  p.y = 4;

  printf("(%d, %d)\n", p.x, p.y);
  printf("%d\n", sizeof(p));
}
