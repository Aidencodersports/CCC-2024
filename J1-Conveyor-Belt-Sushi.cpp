#include <iostream>
using namespace std;

int main() {
  int red;
  int green;
  int blue;
  int cost;
  
  cin >> red;
  cin >> green;
  cin >> blue;

  cost = red * 3 + green * 4 + blue * 5;
  cout << cost;
}
