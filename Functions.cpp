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





// Pythagorean Triplate 

int max(int a, int b){
  if(a>b) return a;
  else return b;
}

bool check(int a, int b, int c){
  if(a*a==b*b+c*c) return true;
  else return false;
}

int main(){
  int a,b,c;
  cout << "Type here three number = ";
  cin >> a >> b >> c;
  int x = max(a, max(b,c));
  if(x==a){
    if(check(a,b,c)) "Pythagorean Triplate";
    else "Not a Pythagorean Triplate";
  }
  else if(x==b){
    if(check(b,a,c)) "Pythagorean Triplate";
    else "Not a Pythagorean Triplate";
  }
  else{
    if(check(c,b,a)) "Pythagorean Triplate";
    else "Not a Pythagorean Triplate";
  }
}





// Pythagorean Triplate - 2

bool check(int a, int b, int c){
  if(a*a==b*b+c*c) return true;
  else return false;
}

bool pythagorean(int a, int b, int c){
  if(a>b && a>c) check(a,b,c);
  else if(b>a && b>c) check(b,a,c);
  else check(c,a,b);
}

int main(){
  int a,b,c;
  cout << "Type here three number = ";
  cin >> a >> b >> c;
  if(pythagorean(a,b,c)) cout << "Pythagorean Triplate";
  else cout << "Not a Pythagorean Triplate";
  return 0;
}







// Binary to Decimal

int b2d(int n){
  int result=0;
  for(int i=2; n>0; i*=2){
    result += (n%10)*i;
    n/=10;
  }
  return result;
}

int main(){
  int n;
  cout << "Type a binary number = ";
  cin >> n;
  cout << "Decimal = " << b2d(n);
  return 0;
}






// Octal to Decimal

int o2d(int n){
  int result = 0;
  for(int i= 1; n>0; i*=8){
    result += (n%10)*i;
    n/=10;
  }
  return result;
}

int main(){
  int n;
  cout << "Type a Octal number = ";
  cin >> n;
  cout << "Decimal = " << o2d(n);
  return 0;
}







// HexaDecimal to Decimal

int h2d(string n){
    int result = 0;
    int x=1;
    for(int i=n.size()-1; i>=0; i--){
        if('9'>=n[i]>='0'){
            int y = n[i]-'0';
            result += x*y;
        }
        else if('A'<=n[i]<='F'){
            int y = n[i]-'A'+10;
            result += x*y;
        }
        x*=16;
    }
    return result;
}

int main(){
    string n;
    cout << "Type a Hexa-Decimal Number = ";
    cin >> n;
    cout << "Decimal = " << h2d(n);
    return 0;
}







// Decimal To Binary

int d2b(int n){
  result = 0;
  for(int i=1; n>0; i*=10){
    int last_disit = n%2;
    n/=2;
    result += i*last_disit;
  }
  return result;
}

int main(){
    int n;
    cout << "Type a Decimal Number = ";
    cin >> n;
    cout << "Binary = " << d2b(n);
    return 0;
}






//Decimal To Octal

int d2o(int n){
  int result = 0;
  for(int i=1; n>0; i*=10){
    int last_disit = n%8;
    result += last_disit*i;
    n/=8;
  }
  return result;
}

int main(){
    int n;
    cout << "Type a Decimal Number = ";
    cin >> n;
    cout << "Octal = " << d2o(n);
    return 0;
}





// Decimal to Hexa-Decimal

string d2h(int n){
  string result,final;
  while(n>0){
    int last_disit = n%16;
    if(last_disit<=9){
      char c = 48 + last_disit;
      result+=c;
    }
    else{
      char c = 'A'+last_disit-10;
      result+=c;
    }
    n/=16;
  }
  for(int i=result.size()-1, j=0; i>=0;i--, j++){
    char temp = result[i];
    final.push_back(temp);
  }
  return final;
}

int main(){
    int n;
    cout << "Type a Decimal Number = ";
    cin >> n;
    cout << "Hexa-Decimal = " << d2h(n);
    return 0;
}






