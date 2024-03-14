#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int a = 3;
  double b = 5.5;

  cout << a + b << endl;

  a++;
  cout << a + b << endl;

  b--;
  cout << a + b << endl;

  a /= b;
  cout << a + b << endl;

  cout << 10 / 3 << endl;

  cout << 10.0 / 3 << endl;

  cout << pow(3, 2) << endl;
  
  cout << sqrt(9) << endl;
  
  cout << sqrt(7.0) << endl;

  cout << round(3.6) << endl;
  
  cout << ceil(3.1) << endl;
  
  cout << floor(3.9) << endl;
  
  cout << fmax(3, 4) << endl;
  
  cout << fmin(4, 5) << endl;

  return 0;
}