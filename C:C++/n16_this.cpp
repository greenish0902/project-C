#include <iostream>

using namespace std;

class MyClass {
public:
  void PrintThis() {
    cout << "My address is: " << this << endl;
  }
};

int main() {
  MyClass a, b;

  cout << "Address of a: " << &a << endl;
  cout << "Address of b: " << &b << endl;

  a.PrintThis();
  b.PrintThis();
}