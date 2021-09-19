#include <iostream>

using namespace std;

class Color {
public:
  Color(): r(0), g(0), b(0), id(idCounter++) { }
  Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) { }
  
  float GetR() { return r; }
  float GetG() { return g; }
  float GetB() { return b; }

  int GetId() { return id; }
  
  static int idCounter;

  static Color MixColors(Color a, Color b) {
    return Color((a.r + b.r)/2, (a.g + b.g)/2 , (a.b + b.b)/2);
  }

private:
  float r;
  float g;
  float b;
  int id;
};

int Color::idCounter = 1;

int main() {
  Color red(1, 0, 0);
  Color blue(0, 0, 1);
  Color purple = Color::MixColors(red, blue);

  cout << "r = " << purple.GetR() << "\ng = " << purple.GetG() << "\nb = " << purple.GetB() << endl;

  cout << "red.GetId() = " << red.GetId() << endl;
  cout << "blue.GetId() = " << blue.GetId() << endl;
  cout << "purple.GetId() = " << purple.GetId() << endl;
}