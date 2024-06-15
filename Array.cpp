#include <bits/stdc++.h>
using namespace std;





// Find The maximum and Minimum number in an array

int main(){
  int n;
  cout << "Type here the size of an array = ";
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cout << "Element " << i+1 << " = ";
    cin >> arr[i];
  }
  int max = arr[0];
  int min = arr[0];
  cout << "Your array is = ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
    if(max<arr[i]) max = arr[i];
    if(min>arr[i]) min = arr[i];
  }
  cout << "\nThe maximum number is = " << max << endl;
  cout << "The minimum number is = " << min << endl;
  return 0;
}










