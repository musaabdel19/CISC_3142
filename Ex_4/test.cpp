#include <iostream>
using namespace std;

int i = 42;
int main() {
  int y = 100;
  int &i = y;
  int *p = &y;
  i = i + int(&i) * (*p);
  cout << i << endl;
  return -1;
}
