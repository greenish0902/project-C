#include <stdio.h>

int main() {
  int n;
  int arr[1000];
  printf("입력할 숫자의 개수: ");
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int min = arr[0];
  for (int i = 1; i < n; i++) {
    if (min > arr[i]) min = arr[i];
  }

  int max = arr[0];
  for (int i = 1; i < n; i++) {
    if (max < arr[i]) max = arr[i];
  }

  printf("min: %d\n", min);
  printf("max: %d\n", max);
}