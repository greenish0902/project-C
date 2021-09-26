#include <iostream>

using namespace std;

class String {
public:
  String() {
    cout << "String() 생성자 호출" << endl;
    strData = NULL;
    len = 0;
  }
  String(const char *str) {
    cout << "String(const char*) 생성자 호출" << endl;
    len = strlen(str);
    strData = new char[len + 1];
    cout << "strData 할당 : " << (void*)strData << endl;
    strcpy(strData, str);
  }
  String(const String &rhs) {  // 복사 생성자
    cout << "String(String &rhs) 생성자 호출" << endl;
    strData = new char[rhs.len + 1];
    cout << "strData 할당 : " << (void*)strData << endl;
    strcpy(strData, rhs.strData);
    len = rhs.len; 
  }
  ~String() {  // 소멸자: 동적 할장 해제
    cout << "~String() 소멸자 호출" << endl;
    delete[] strData;
    cout << "strData 해제됨 : " << (void*)strData << endl;
    strData = NULL;
  }
  String &operator=(const String &rhs) {
    if (this != &rhs) {
      delete[] strData;
      cout << "operator= 호출" << endl;
      strData = new char[rhs.len + 1];
      cout << "strData 할당 : " << (void*)strData << endl;
      strcpy(strData, rhs.strData);
      len = rhs.len;
      return *this;
    }
  }
  char *GetStrData() const {  // char *(포인터) 자료형을 반환
    return strData;
  }
  int GetLen() const {
    return len;
  }
private:
  char *strData;  // 문자열 동적할당
  int len;  // 문자열 길이 동적으로 update
};

int main() {
  String s1("안녕");
  String s2(s1);  // 복사 생성자
  String s3;
  s3 = s1;  // s3.operator=(s1); 과 동일

  int a = 5;
  int b;
  int c = b = a;
  cout << s1.GetStrData() << endl;
  cout << s2.GetStrData() << endl;
  cout << s3.GetStrData() << endl;
}