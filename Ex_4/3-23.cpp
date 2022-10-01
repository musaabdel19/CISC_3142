#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
  //initializes a list to store inputs
  vector<int> v(10);
  int x = 1;
  //returns the beginning and after end of specified input
  vector<int>::iterator it = v.begin();
  vector<int>::iterator itEnd = v.end();

  //doubles each value from the previous
  while (it != itEnd) {
    *it = x = x*2;
    cout << *it << " ";
    it++;
  }
  return 0;
}
  
