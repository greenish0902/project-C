#include <iostream>

using namespace std;

class MyClass {
public:
  MyClass() {  // 생성자, 반환 자료형 명시 X
    cout << "constructor called" << endl;
  }
  ~MyClass() { // 소멸자
    cout << "destructor called" << endl;
  }
};

MyClass globalObj;

void testLocalObj() {
  cout << "testLocalObj started!!" << endl;
  MyClass localObj;
  cout << "testLocalObj end!!" << endl;
}

int main() {
  cout << "main function start!" << endl;
  testLocalObj();
  cout << "main function end!" << endl;
}