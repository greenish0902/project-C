#include <iostream>

using namespace std;

int main() {
  int a(5);
  int &p = a;
  p = 10;

  cout << p << endl;
  cout << a << endl;
}