#include <stdio.h>

int main() {
  int score;
  scanf("%d", &score);
  
  if (score > 100 || score < 0) {printf("0 < score < 100 :(\n");
  } else if (score >= 90) {printf("A\n");
  } else if (score >= 80) {printf("B\n");
  } else if (score >= 70) {printf("C\n");
  } else if (score >= 60) {printf("D\n");
  } else if (score >= 50) {printf("E\n");
  } else printf("no score\n");
}