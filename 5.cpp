#include <iostream>

using namespace std;

int factorial(int *n) {
    int result = 1;
    for (int i=1; i<=*n; i++)
        result *= i;
    return result;
}
 
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int *ptr = &num;
    cout << "The factorial of " << num << " is " << factorial(ptr) << endl;
    return 0;
}