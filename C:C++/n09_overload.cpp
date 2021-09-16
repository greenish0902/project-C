#include <iostream>

using namespace std;

int inventory[64] = { 0 };  // inventory of items
int score = 0;  // score

// void getItem(int itemId) {  // id
//   inventory[itemId++];
// }

// void getItem(int itemId, int cnt) {  // id, count
//   inventory[itemId]  += cnt;
// }

// overloading -> default parameter
void getItem(int itemId, int cnt = 1, int sc = 0) {  // id, count, score
  inventory[itemId] += cnt;
  score += sc;
}

int main() {
  getItem(9);
  getItem(6, 5);
  getItem(10, 2);
  getItem(2, 1, 10);
  getItem(12, 49, 7000);
  getItem(31, 2, 10000);

  cout << score << endl;
  for (int i = 0; i < 16; i++) {
    cout << inventory[i] << ' ';
  }
  cout << endl;
}