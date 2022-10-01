#include <iostream>
using namespace std;

int main() {
  float cost, rate;
  int time;
  cout << "Enter price of product: " << endl;
  cin >> cost;
  cout << "How long ago was the item purchased(yrs.): " << endl;
  cin >> time;
  cout << "Enter the rate of inflation: " << endl;
  cin >> rate;
  rate = rate/100;
  //takes given inputs and calculates new cost based on infl-rate given
  for (int i = 1; i < time; i++) {
    cost += cost * rate;
  }
  cost =  (cost * 100) / 100;
  cout << "The expected price is: " << cost << endl;

  return 0;
}
