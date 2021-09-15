#include <iostream>

using namespace std;

int main() {
  // r-value: 등호 기준 "수정할 수 없는 값" == 우변의 값.
  // l-value: 수정할 수 있는 값 == 좌변의 값.
  
  int a(5);
  int &r1 = a;
  int &r2 = 3;  // 실제로 메모리상에 저장된 값이 아님; 상수를 가리킬 수 없음
  int &r3 = a * a; // 메모리상에 저장된 값이 아님

  // && -> 이제 r1, r2, r3는 r-value (바꿀 수 없는 값)이다!
  // r-value는 3, a*a ... 수정 가능한 값들에 대한 ref. 를 제공힌다.
  int &&r1 = a; // 불가능
  int &&r2 = 3; // 수정할 수 있는 값이므로 r-value에 할당 가능
  int &&r3 = a * a; // 함숫값: 수정할 수 있는 값이므로 r-value로 참조 가능
  
}