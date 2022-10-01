#include <iostream>
using namespace std;

int main() {
  //prints the size in bytes of each data type presented
  cout << "char: " << sizeof(char) << "byte" << endl;
  cout << "short: " << sizeof(short) << "bytes" << endl;
  cout << "int: " << sizeof(int) << "bytes" << endl;
  cout << "float: " << sizeof(float) << "bytes" << endl;
  cout << "double: " << sizeof(double) << "bytes" << endl;
  cout << "long: " << sizeof(long) << "bytes" << endl;
  cout << "long long: " << sizeof(long long) << "bytes" << endl;

  return 0;
}
