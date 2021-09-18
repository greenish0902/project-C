#include <iostream>

using namespace std;

class Complex {
public:
  // Complex() {
  //   real = 0;
  //   imag = 0;
  // }
  Complex() : real(0), imag(0){  }
  // Complex(double real_ = 0, double imag_ = 0) {
  //   real = real_;
  //   imag = imag_;
  // }
  Complex(double real_, double imag_) : real(real_), imag(imag_) {};
  double GetReal() {
    return real;
  }
  void SetReal(double real_) {
    real = real_;
  }
  double GetImag() {
    return imag;
  }
  void SetImag(double imag_) {
    imag = imag_;
  }

private:
  double real;
  double imag;
};

int main() {
  Complex c1;  // 첫 번째 생성자 호출
  Complex c2 = Complex(2, 3);  // 두 번째 생성자 호출
  Complex c3(2, 3);  // 두 번째 생성자 호출
  Complex c4 = { 2, 3 };
  Complex c5 = Complex{2, 3};
  Complex c6{2, 3};

  cout << "c1: " << c1.GetReal() << ", " << c1.GetImag() << endl;
  cout << "c2: " << c2.GetReal() << ", " << c2.GetImag() << endl;
  cout << "c3: " << c3.GetReal() << ", " << c3.GetImag() << endl;
}