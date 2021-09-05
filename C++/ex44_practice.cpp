#include <stdio.h>

int main() {
  int row, col;
  printf("행의 개수: ");
  scanf("%d", &row);
  printf("열의 개수: ");
  scanf("%d", &col);

  int arr[row][col];
  printf("크기가 %d인 배열을 입력하세요\n", row*col);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < row; i++) {
    int sum = 0;
    for (int j = 0; j < col; j++) {
      sum += arr[i][j];
    }
    printf("%d\n", sum);
  }
}