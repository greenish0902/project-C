#include <stdio.h>

int itemCnt = 0; // 전역변수
int money = 1000;
  
int buyItem(int cost, int cnt) { // 매개변수
  if (money < cost) {
    printf("잔액이 부족합니다.\n");
    return -1;
  }
  itemCnt += cnt;
  money -= cost;
  printf("아이템을 구매했습니다.\n");
  printf("  아이템 개수: %d\n", itemCnt);
  printf("  잔액: %d\n", money);
  return 0;
}

int main() {
  int result;
  result = buyItem(5000, 5);
  if (result == -1) {
    printf("돈이 부족하시군요...\n");
  }
  result = buyItem(500, 5);
}