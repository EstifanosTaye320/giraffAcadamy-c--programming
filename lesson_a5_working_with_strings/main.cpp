#include <iostream>

using namespace std;

int main () {
  
  string myString = "Estifanos Taye";

  cout << "GiraffAcadamy\n";
  cout << "Hello" << endl;

  cout << myString.length() << endl;

  cout << myString[0] << endl;

  myString = myString.append(" is the man :)");
  cout << myString << endl;

  myString[0] = 'B';
  cout << myString << endl;

  cout << myString.find("nos", 0) << endl;

  string phraseSub = myString.substr(4, 5);
  cout << phraseSub << endl;
  
  return 0;
}