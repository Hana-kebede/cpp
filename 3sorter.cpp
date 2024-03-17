#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}


void insertionSort(int arr[], int n){
  int key, j;
  for(int i = 1 ; i < n ; i++){
    key = arr[i];
    j = i -1;
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
    printArray(arr, n);
  }
}


void selectionSort(int arr[], int n)
{
  int i, j, min_idx;
  for (i = 0; i < n-1; i++)
  {
    min_idx = i;
    for (j = i+1; j < n; j++)
    {
      if (arr[j] < arr[min_idx])
        min_idx = j;
    }
    if (min_idx!=i){
      printArray(arr,n);
      swap(&arr[min_idx], &arr[i]);
    }
  }
  printArray(arr,n);
}


// Driver program to test above functions
int main()
{
  int n, arr[100];
  cout << "Enter the number of elements you want to sort : ";
  cin >> n;
//  int arr[n];
  cout << "Enter " << n << "  values: " <<endl;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  start:
  int choice;
  cout << "Please pick which sorting algorthim to use?" << endl;
  cout << "1. Insertion Sort " << endl;
  cout << "2. Selection Sort" << endl;
  cout << "0. Exit " << endl;
  cout << "Enter choice : ";
  cin >> choice;

  switch(choice){
      case 0:
        cout << "Thank you for using this program, good bye" <<endl;
        return 0;
      case 1:
        cout << "Insertion Sorting" <<endl;
        cout << "=================" <<endl;
        cout << "Input : ";
        printArray(arr,n);
        insertionSort(arr,n);
        break;
      case 2:
        cout << "Selection Sorting" <<endl;
        cout << "=================" <<endl;
        cout << "Input : ";
        printArray(arr,n);
        selectionSort(arr,n);
        break;
      default:
        cout << "Enter valid option " << endl;
        goto start;
      }
  cout << "Sorted : ";
  printArray(arr, n);
  return 0;
}
// This is code is contributed by rathbhupendra