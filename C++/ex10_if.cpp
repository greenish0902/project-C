#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);
  
  if (a > b) {
    if (a > c) {
      printf("%d is the winner!\n", a);
    }
    else {
      printf("%d is the winner!\n", c);
    }
  } else if (b > c){
    printf("%d is the winner!\n", b);
  } else {
    printf("%d is the winner!\n", c);
  }
}