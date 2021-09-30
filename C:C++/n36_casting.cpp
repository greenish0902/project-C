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

  // casting operator overloading: int
  operator int() const{
    return num;
  }
  // casting operator overloading: string
  explicit operator string() const{
    return to_string(num) + " : " + name;
  }

private:
  int num;
  string name; 
};

void println(string s) {
  cout << s << endl;
}
void println(int n) {
  cout << n << endl;
}

int main() {
  Item i1 = Item(1);
  Item i2(2);
  Item i3 = 3;
  i3 = 3;  // 묵시적 변환
  Item i4 = (Item)4;  // 명시적 변환
  Item i5("stone");
  Item i6(0);
  i6 = string("sky");
  Item i7 = (string)"stone";  // 명시적 변환
  Item i8(1, "grass");
  i8 = {2, "dirt"};  // 묵시적 변환: 2개 이상의 매개변수
  Item i9 = {3, "wood"};

  int itemNum1 = (int)i6;  // 명시적
  int itemNum2 = i7;  // 묵시적
  
  println(string(i6));
  println((string)i7);
  println((int)i8);
  println((string)i9);
}