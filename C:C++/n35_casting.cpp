#include <iostream>
#include <string>

using namespace std;

class Item {
public:
  Item(int num) : num(num) {
    cout << "Item(int)" << endl;
  }
  Item(string name) : name(name) {
    cout << "Item(string)" << endl;
  }
  Item(int num, string name) : num(num), name(name) {
    cout << "Item(int, string)" << endl;
  }

  void print() {
    cout << num << " : " << name << endl;
  }

private:
  int num;
  string name; 
};

int main() {
  Item i1 = Item(1);
  Item i2(2);
  Item i3 = 3;
  i3 = 3;  // 묵시적 변환
  Item i4 = (Item)4;  // 명시적 변환
  Item i5("stone");
  Item i6(5);
  i6 = string("stone");
  Item i7 = (string)"stone";  // 명시적 변환
  Item i8(1, "grass");
  i8 = {2, "dirt"};  // 묵시적 변환: 2개 이상의 매개변수
  Item i9 = {3, "wood"};

  i1.print();
  i2.print();
  i3.print();
  i4.print();
  i5.print();
  i6.print();
  i7.print();
  i8.print();
  i9.print();
}