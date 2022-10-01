#include <iostream>
using namespace std;

int main() {
  const float sweetner = 0.001;
  // s = sweetner, w = weight
  float smouse, wmouse, sdieter, wdieter;
  int cans;

  cout << "Enter lethal dose of sweetner for a mouse: " << endl;
  cin >> smouse;
  cout << "Enter weight of mouse(grams): " << endl;
  cin >> wmouse;
  cout << "Enter weight of dieter: " << endl;
  cin >> wdieter;

  //takes inputs given and formulates how many would kill a person
  //based on weight and in relativity to the weight of a test mouse
  sdieter = (smouse/wmouse) * wdieter;
  cans = (sdieter/sweetner);

  cout << "The number of cans considered lethal is: "<< cans << endl;

  return 0;
}
	   
