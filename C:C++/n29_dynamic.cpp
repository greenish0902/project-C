#include <iostream>

using namespace std;

int main() {
  int *arr;
  int len;

  cout << "array length: ";
  cin >> len;

  arr = new int[len];

  for (int i = 0; i < len; i++) {
    arr[i] = len - i;
  }
  for (int i = 0; i < len; i++) {
    cout << arr[i] << endl;
  }

  delete[] arr;
}