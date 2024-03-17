#include<iostream>

using namespace std;

int main(){
 float ang1,ang2,ang3;
 cout << "Triangle Varifier" <<endl;
 cout << "==================" << endl;
 cout << "Enter three angles to verify as triangle : ";
 cin >> ang1 >> ang2 >> ang3;
 float angleSum = ang1 + ang2 + ang3;
 if( angleSum == 180.0)
  cout << "Valid Triangle" << endl;
 else
  cout << "Invalid Triangle" << endl;
}
