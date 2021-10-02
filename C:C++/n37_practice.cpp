#include <iostream>

using namespace std;

int main() {
  int a = 10, b = 20, c = 30;
  int *p = &a;
  int &r = b;
  int **pp = &p;
  int* (&rp) = p;
  
  r = c / *p; // b = r = 30/10 = 3
  rp = &c;  // c = rp = 30
  **pp = 40;  // a = 40
  *p = 50;  // a = 50
  *pp = &a;  // pp = 50
  *rp = 60;  // c = rp = 60

  cout << a << endl;  // 60 50
  cout << b << endl;  // 3
  cout << c << endl;  // 50 60
  cout << *p << endl;  // 60 50
  cout << r << endl;  // 3
  cout << **pp << endl;  // 60 50
  cout << *rp << endl;  // 60
}