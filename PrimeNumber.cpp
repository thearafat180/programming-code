#include <bits/stdc++.h>
using namespace std;

// Is prime or not.

int main(){
  int n,i;
  cout << "Type your number = ";
  cin >> n;
  for(i=2;i<n;i++){
    if(n%i==0){
      cout << "The number is Non-Prime." << endl;
      break;
    }
  }
  if(i==n){
    cout << "The number is Prime." << endl;
  }
  return 0;
}
