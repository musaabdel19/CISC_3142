#include <iostream>
using namespace std;

class Rectangle {
public:
  float length, width;

  void setlength(float len) {
    length = len;
  }
  void setwidth(float wid) {
    width = wid;
  }

  float area() {
    return length * width;
  }
  float perimeter() {
    return 2 * (length + width);
  }

  void show() {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
  }

  int sameArea(Rectangle r) {
    if (area() == r.area())
      return 1;

    else
      return 0;
  }
};

int main() {
  Rectangle obj1, obj2;

  obj1.setlength(5);
  obj1.setwidth(2.5);

  obj2.setlength(5);
  obj2.setwidth(18.9);

  cout << "Rectangle 1 has" << endl;
  obj1.show();

  cout << "Rectangle 2 has" << endl;
  obj2.show();

  cout <<"Area of Rectangle 1: " << obj1.area() << endl;
  cout <<"Perimeter of Rectangle 1: " << obj1.perimeter() << endl;
  cout <<"Area of Rectangle 2: " << obj2.area() << endl;
  cout <<"Perimeter of Rectangle 2: " << obj2.perimeter() << endl;

  if (obj1.sameArea(obj2)) {
    cout << "Both rectangles have the same area" << endl;
  }
  else {
    cout << "Both rectangles don't have the same area" << endl;
  }

  obj1.setlength(15);
  obj1.setwidth(6.3);

  cout << "After changes - Rectangle 1 has" << endl;
  obj1.show();

  cout << "Rectangle 2 has" << endl;
  obj2.show();

  cout <<"Area of Rectangle 1: " << obj1.area() << endl;
  cout <<"Perimeter of Rectangle 1: " << obj1.perimeter() << endl;
  cout <<"Area of Rectangle 2: " << obj2.area() << endl;
  cout <<"Perimeter of Rectangle 2: " << obj2.perimeter() << endl;

  if (obj1.sameArea(obj2)) {
    cout << "Both rectangles have the same area" << endl;
  }
  else {
    cout << "Both rectangles don't have the same area" << endl;
  }
  return 0;
}
