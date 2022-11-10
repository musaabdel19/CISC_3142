#include <iostream>
using namespace std;

class Sample {
private:
  int x;
  double y;

public:
  Sample() {
    x = 0;
    y = 0;
  }

  Sample(int x1) {
    x = x1;
    y = 0;
  }

  Sample(int x1, int y1) {
    x = x1;
    y = (double)y1;
  }

  Sample(int x1, double y1) {
    x = x1;
    y = y1;
  }
};

int main() {
  Sample s(1,2);
}
