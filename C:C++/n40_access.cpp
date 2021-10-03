#include <iostream>

using namespace std;

class Base {
public:
  int bPublic;

protected:
  int bProtected;

private:
  int bPrivate;
};

class Derived : public Base {
public:
  int dPublic;

  void DFunc() {  // to check accessibility
    bPublic = 1;
    bProtected = 2;
    // bPrivate = 3;
    dPublic = 4;
    dPrivate = 5;
  }

private:
  int dPrivate;
}

int main() {    // to check accessibility
  Base b;
  Derived d;

  b.bPublic = 1;
  // b.bProtected = 2;
  // b.bPrivate = 3;

  d.bPublic = 1;
  // d.bProtected = 2;
  // d.bPrivate = 3;
  d.dPublic = 4;
  // d.dPrivate = 5;
}