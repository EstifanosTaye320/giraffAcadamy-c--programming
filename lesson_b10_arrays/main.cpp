#include <iostream>

using namespace std;

int main() {
  int luckyNumbs[] = {7, 3, 5, 2, 9};

  cout << luckyNumbs[0] << endl;
  
  luckyNumbs[1] = 10;
  cout << luckyNumbs[1] << endl;

  cout << luckyNumbs << endl;

  int otherNumbs[20];
  otherNumbs[10] = 100;

  cout << otherNumbs[10] << endl;
  return 0;
}