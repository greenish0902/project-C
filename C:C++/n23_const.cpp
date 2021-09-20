#include <iostream>

using namespace std;

class Account {
public:
  Account() : money(0) { }
  Account(int money) : money(money) { }

  void Deposit(const int d) {
    money += d;
    cout << d << "원을 예금했다!!" << endl;
  }
  void Draw(const int d) {
    if (money >= d) {
      money -= d;      
    }
    cout << d << "원을 인출했다!!" << endl;
  }
  int ViewMoney() const {
    return money;
  }

private:
  int money;
};

int main() {
  Account shiloh(100);
  shiloh.Deposit(100);
  shiloh.Draw(20);

  cout << "현재 잔액: " << shiloh.ViewMoney() << endl;
}