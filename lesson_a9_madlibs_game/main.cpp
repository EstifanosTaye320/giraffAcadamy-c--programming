#include <iostream>

using namespace std;

int main() {
  string action1, location1, name1, action2, location2;

  cout << "Enter an action: ";
  getline(cin, action1);

  cout << "Enter an location: ";
  getline(cin, location1);

  cout << "Enter an noun: ";
  getline(cin, name1);

  cout << "Enter an action: ";
  getline(cin, action2);

  cout << "Enter an location: ";
  getline(cin, location2);

  cout << "i need to do " << action1 << " so i need you to go to "<< location1 << " and get me a "<< name1 << endl;
  cout << "and that is all for the "<< action2 <<" on the "<< location2 << endl;
  return 0;
}