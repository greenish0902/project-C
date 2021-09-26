#include <iostream>

using namespace std;

class String {
public:
  String() {
    cout << "String() : " << this << endl;
    strData = NULL;
    len = 0;
  }
  String(const char *str) {
    cout << "String(const char*) : " << this << endl;
    len = strlen(str);
    alloc(len);
    strcpy(strData, str);
  }
  String(const String &rhs) {
    cout << "String(const String&) : " << this << endl;
    len = rhs.len;
    alloc(len);
    strcpy(strData, rhs.strData);
  }
  ~String() {
    cout << "~String() : " << this << endl;
    release();
    strData = NULL;
  }
  String &operator=(const String &rhs) {
    cout << "String &operator=(const String&) : " << this << endl;
    if (this != &rhs) {
      release();
      len = rhs.len;
      alloc(len);
      strcpy(strData, rhs.strData);
    }
    return *this;
  }

  char* GetStrData() const {
    return strData;
  }
  int Getlen() const {
    return len;
  }
  void SetStrData(const char *str) {
    cout << "void SetStrData(const char*) : " << this << ", " << str << endl;
    len = strlen(str);
    alloc(len);
    strcpy(strData, str);
  }
private:
  void alloc(int len) {
    strData = new char[len + 1];
    cout << "strData allocated : " << (void*)strData << endl;
  }
  void release() {
    delete[] strData;
    if (strData) cout << "strData released : " << (void*)strData << endl;
  }
  char* strData;
  int len;
};

int main() {
  
}