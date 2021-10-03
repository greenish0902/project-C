#include <iostream>

using namespace std;

class Base {
public:
  void bfunc() {
    cout << "Hello!" << endl;
  }

  int bNum;
};

class Derived : public Base {
public:
  void dFunc() {
    cout << "Hello?" << endl;
  }

  int dNum;
};

int main() {
  Base b;
  Derived d;

  b.bfunc();
  b.bNum = 1;

  d.bfunc();
  d.bNum = 2;
  d.dFunc();
  d.dNum = 3;
}