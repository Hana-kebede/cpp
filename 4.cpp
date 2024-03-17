#include <iostream> 
using namespace std; 
  
int getCount(int arr[], int n, int x) 
{ 
    int count = 0; 
    for (int i=0; i<n; i++) 
        if (arr[i] == x) 
            count++; 
    return count; 
} 
  
int main() 
{ 
    int arr[10], x;
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout<<"Enter the elements of array: "; 
    for (int i=0; i<n; i++) 
        cin>>arr[i];

    cout<<endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";  
    }
    cout << endl;
    cin.ignore(); 
    cout<<"Enter the number to search: "; 
    cin>>x; 
    cout<<"The number "<<x<<" appears "<< getCount(arr, n, x)<<" times in the array."; 
    return 0; 
}