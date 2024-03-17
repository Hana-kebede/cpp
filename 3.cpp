#include<iostream>

using namespace std;

int main(){
 int operand;
 cout << "Absolute Value Calculator" <<endl;
 cout << "=========================" << endl;
 cout << "Enter a number : ";
 cin >> operand;
 if(operand >= 0){
  cout << "|" << operand << "| = " << operand << endl;
  return 0;
 } 
  cout << "|" << operand << "| = " << operand * -1 << endl;
}