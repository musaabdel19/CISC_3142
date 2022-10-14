 to#include <iostream>
using namespace std;

int main() {
  int sum, num, remain;
  sum = 0;

  cout << "Enter a large number: " << endl;
  cin >> num;

  while(num > 0) {
    remain = num % 10;
    sum = sum + remain;
    num = num/10;
  }
  cout << "Sum of digits: " << sum << endl;
  return 0;
}
