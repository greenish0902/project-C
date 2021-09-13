#include <stdio.h>

int main() {
  int n = 450;
  char str[100];

  sprintf(str, "%d", n);
  printf("%s\n", str);
}