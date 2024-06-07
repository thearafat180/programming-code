#include <bits/stdc++.h>
using namespace std;





// Check the number is prime or not.

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




// Another tecnique but previous was better

int main(){
  int n,test=1;
  cout << "Type your number = ";
  cin >> n;
  for(int i=2; i<n; i++){
    if(n%i==0){
      test = 0;
      break;
    }
  }
  if(test==1){
    cout << "The number is Prime." << endl;
  }
  else{
    cout << "The number is Non-Prime." << endl;
  }
  return 0;
}






// Print prime numbers between two numbers.

int main(){
  int i,a,b,count=0;
  cout << "Type the range = ";
  cin >> a >> b;
  for(a; a<=b; a++){
    for(i=2; i<a; i++){
      if(n%i==0){
        break;
      }
    }
    if(i==a){
      cout << i << endl;
      count++;
    }
  }
  cout << "There are " << count << " prime numbers between " << a << " and " << b;
  return 0;
}
