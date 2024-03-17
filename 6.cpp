#include<iostream>

using namespace std;

int main(){
 char input;
 cout << "Character Identifier" <<endl;
 cout << "====================" <<endl;
 cout << "Enter a character : ";
 cin >> input;
 int asciiValue = int(input);
 if(asciiValue >= 65 && asciiValue <= 90)
  cout << input << " is a Capital letter" << endl;
 else if (asciiValue >= 97 && asciiValue <= 122)
  cout << input << " is a small case letter" << endl;
 else if (asciiValue >= 48 && asciiValue <= 57)
  cout << input << " is a digit" << endl;
 else 
  cout << input << " is a special symbol" << endl;
}
