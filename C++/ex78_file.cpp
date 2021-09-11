#include <stdio.h>

int main() {
  FILE *in;
  in = fopen("ex78_file.cpp", "r");
  char ch;

  while(!feof(in)) {
    fscanf(in, "%c", &ch);
    printf("%c", ch);
  }
  while(fscanf(in, "%c", &ch) != EOF) {
    printf("%c", ch);
  }
  fclose(in);
}