#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  //initializes a list to store inputs
  vector<string> vec;
  string words;
while (cin >> words) {
    vec.push_back(words);
    //loop to capitalize each letter in the given word
  for (int i = 0; i < vec.size(); ++i) {
    for (auto &c : vec[i]) {
      c = toupper(c);
    }
    // The minimun number of words is 8
    if (i % 8 == 0) {
      cout << endl;
    }
    cout << vec[i] << " ";
  }
 }
  return 0;
}
