#include <iostream>

using namespace std;

// struct TV {
// private:
class TV {
  bool powerOn;
  int channel;
  int volume;

public:
  void on() {
    powerOn = true;
    cout << "Your TV is turned on!" << endl;
  }
  void off() {
    powerOn = false;
    cout << "Your TV is turned off!" << endl;
  }
  void setChannel(int cnl) {
    if (cnl > 0 && cnl < 1000) {
      channel = cnl;
      cout << "Your channel is " << cnl << " now." << endl;
    }
  }
  void setVolume(int vol) {
    if (vol > 0 && vol <= 100) {
      volume = vol;
      cout << "Your volume is " << vol << " now." << endl;
    }
  }
};  // struct 끝에 세미콜론

int main() {
  TV lg;
  lg.on();
  lg.setChannel(10);
  lg.setVolume(50);
}