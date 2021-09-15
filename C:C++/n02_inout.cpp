#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  cout << "name: ";
  cin >> name;

  string message = "hello, " + name + " 😀";
  cout << message;
 }