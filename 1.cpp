#include<iostream>

using namespace std;

int main(){
 int var1 = 1;
 int var2 = 2;
 cout << "Before Swap" <<endl;
 cout << "===========" << endl;
 cout << "First Variable: " << var1 <<endl;
 cout << "Second Variable: " << var2 <<endl;

 var1 = var2 + var1;
 var2 = var1 - var2;
 var1 = var1 - var2;
 
 cout << "\nAfter Swap" <<endl;
 cout << "===========" << endl;
 cout << "First Variable: " << var1 <<endl;
 cout << "Second Variable: " << var2 <<endl;
 
}