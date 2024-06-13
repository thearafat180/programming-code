#include <bits/stdc++.h>
using namespace std;




// Way - 1



int prime_range(int a, int b){
  for(int i=a, i<=b; i++){
    bool flag = 1;
    for(int j=2; j<=sqrt(i); j++){
      if(i%j==0){
        flag = 0;
        break;
      }
    }
    if(flag==1){
      cout << i << " ";
    }
  }
}

int main(){
  int a, b;
  cout << " Type here two number = ";
  cin << a << b;
  prime_range(a,b);
  return 0;
}








// Way - 2




#include <bits/stdc++.h>
using namespace std;

void prime_range(int a, int b){
  for(int i=a; i<=b; i++){
    int j;
    for(j=2; j<i; j++){
      if(i%j==0){
        break;
      }
    }
    if(j==i){
      cout << i << " ";
    }
  }
  return;
}

int main(){
  int a, b;
  cout << " Type here two number = ";
  cin >> a >> b;
  prime_range(a,b);
  return 0;
}






// Way - 3




bool isPrime(int n){
    int i=2;
  for(i; i<n; i++){
    if(n%i==0) return false;
  }
  if(i==n) return true;
  return false;
}

int main(){
  int a, b;
  cout << "Type here two number = ";
  cin >> a >> b;
  for(int i=a; i<=b; i++){
    if(isPrime(i)) cout << i << " ";
  }
  return 0;
}











// Fibenacci Series

void fibonacci(int n){
  int n1, n2, next_num;
  n1=0;
  n2=1;
  for(int i=0; i<n; i++){
    cout << n1 << " ";
    next_num=n1+n2;
    n1=n2;
    n2=next_num;
  }
  return;
}

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  fibonacci(n);
}









// Factorial

int factorial(int n){
  int fact = 1;
  for(int i=n; i>1; i--){
    fact *=i;
  }
  return fact;
}

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  cout << factorial(n);
}







// nCr Calculation

int fact(int n){
  int fact = 1;
  for(int i=1; i<=n; i++){
    fact*=i;
  }
  return fact;
}

int main(){
  int n, r, result;
  cout << "Type n & r respectively = ";
  cin >> n >> r;
  result = fact(n)/(fact(n-r)*fact(r));
  cout << result;
  return 0;
}






// Pascal Triangle 

int fact(int n){
  int fact = 1;
  for(int i=1; i<=n; i++){
    fact*=i;
  }
  return fact;
}

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=0; i<n; i++){
    for(int j=n-1; j>i; j--){
      cout << "  ";
    }
    for(int j=0; j<=i; j++){
      int ans = fact(i)/(fact(i-j)*fact(j));
      cout << ans << "   ";
    }
    cout << endl;
  }
  return 0;
}




