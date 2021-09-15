#include <iostream>

using namespace std;

// 범위 기반 for문
int main() {
  int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  
  for (int &n: arr) {
    cout << n;
    n++;
  } 
  cout << endl;

  for (int n: arr) {
    cout << n << endl;
  }
  cout << endl;
}