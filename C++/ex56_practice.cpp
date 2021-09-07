#include <stdio.h>
#include <string.h>

void print_noSpace(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] != ' ' && str[i] != ',') {
      printf("%c", str[i]);
    }
  }
}

int main() {
  print_noSpace("Hello, World!\n");
  print_noSpace("I am Shiloh!\n");
} 