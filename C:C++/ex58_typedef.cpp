#include <stdio.h>

int main() {
  typedef char *String;
  String name = "Shiloh"; // char *name = "Doodle";
  printf("이름: %s\n", name);
}