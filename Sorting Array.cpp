#include <bits/stdc++.h>
using namespace std;

// Selection Sorting

int main(){
  int n;
  cout << "Type the size of an array = ";
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cout << "Elemnent " << i+1 << " = ";
    cin >> arr[i];
  }
  cout << "The Array = ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  
  // Selection Sorting
  
  for(int i = 0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  cout << "\nThe Sorting Array = ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}



// Bubble Sorting

int main(){
  int n;
  cout << "Type the size of an array = ";
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cout << "Elemnent " << i+1 << " = ";
    cin >> arr[i];
  }
  cout << "The Array = ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  
  // Bubble Sorting

  for(int i=1; i<n; i++){
    for(int j=0; j<n-i; j++){
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j]= arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  cout << "\nThe Sorting Array = ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}







// Insertion Sort

int main(){
  int n;
  cout << "Type the size of an array = ";
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cout << "Elemnent " << i+1 << " = ";
    cin >> arr[i];
  }
  cout << "The Array = ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  
  // Insertion Sorting

  for(int i=1; i<n; i++){
    for(int j=i-1; j>=0 && arr[j+1]<arr[j]; j--){
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
    }
  }
  cout << "\nThe Sorting Array = ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}

  
