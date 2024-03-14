#include <iostream>

using namespace std;

int main() {
  int userAge;
  cout << "Enter Your age: ";
  cin >> userAge;
  cout << "Your are " << userAge << " years old!"<< endl;

  char myCharacter;
  cout << "Enter a character: ";
  cin >> myCharacter;
  // this will allow the use of getline(cin, variable) after using cin
  cin.ignore();
  cout << myCharacter << endl;

  string userName;
  cout << "Enter you name: ";
  getline(cin, userName);
  cout << "Your name is " << userName << endl;

  return 0;
}