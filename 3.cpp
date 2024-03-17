#include <iostream> 
#include <algorithm> 

using namespace std; 

int findKlargest(int arr[], int size, int k) 
{ 
 sort(arr, arr + size); 
 return arr[size - k]; 
} 

int main() 
{ 
 int arr[] = {2, 12, 48, 9, 30, 2, 43}; 
 int n = sizeof(arr) / sizeof(arr[0]); 
 int k = 0;
 switch(k){
    case 1:
        cout << "The First largest element is " << findKlargest(arr, n, k); 
    break;
    case 2:
        cout << "The Second largest element is " << findKlargest(arr, n, k); 
    break;
    case 3:
        cout << "The Third largest element is " << findKlargest(arr, n, k); 
    break;
    default:
        cout << "The " << k <<"'th largest element is " << findKlargest(arr, n, k); 
  }
   return 0; 
}