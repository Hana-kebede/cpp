#include <iostream> 
#include <algorithm> 

using namespace std; 

int findLargest(int arr[], int size) 
{ 
 int max = arr[0];
 for(int i = 0; i < size; i++){
    if(max < arr[i])
        max = arr[i];
 }
 return max; 
} 

int main() 
{ 
 int arr[] = {2, 12, 48, 9, 30, 2, 43}; 
 int n = sizeof(arr) / sizeof(arr[0]); 
 cout << "The largest element is " << findLargest(arr,n); 
 return 0; 
} 
