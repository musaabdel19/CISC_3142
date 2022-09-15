#include <iostream>

int main() {
  int x1 = 0, x2 = 0;
  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> x1 >> x2;
  std::cout << "We'll start here " << std::endl;
  for (int i = x1; i <= x2; i++) {
    std::cout << i << std::endl;
  }
  std::cout << "And end here " << std::endl;
  std::cout << std::endl;
  return 0;
}
  
