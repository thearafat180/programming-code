#include <bits/stdc++.h>
using namespace std;



// Rectangle Patterns

int main(){
  int row,colum;
  cout << "Type the number of row and colum = ";
  cin >> row >> colum;
  for(int i=0;i<colum;i++){
    for(int j=0; j<row; j++){
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}





// Hollow Rectangle Patterns

int main(){
  int row, colum;
  cout << "Type the number of row and colum = ";
  cin >> row >> colum;
  for(int i=1; i<=row; i++){
    for(int j=1; j<=colum; j++){
      if(i==1 || i==row || j==1 || j==colum){
        cout << "* ";
      }
      else{
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}





// Inverted Half Pyramid

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=n; i>0; i--){
    for(int j=i; j>0; j--){
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}








// Half Pyramid After 180 Degrees Rotation.

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=n-i; j>0; j--){
        cout << "  ";
    }
    for(int k=1; k<=i; k++){
       cout << "* "; 
    }
    cout << endl;
  }
  return 0;
}


// Alternative Way

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(j<n-1-i){
        cout << "  ";
      }
      else{
        cout << "* ";
      }
    }
    cout << endl;
  }
  return 0;
}








// Half Pyramid Using Numbers

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=0; j<i; j++){
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}







// Floyd's Tryangle

int main(){
  int n, count=0;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      cout << ++count << " ";
    }
    cout << endl;
  }
  return 0;
}






// Butterfly Pattern

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
       cout << "* ";
    }
    for(int j=1; j<=2*(n-i); j++){
      cout << "  ";
    }
    for(int j=1; j<=i; j++){
       cout << "* ";
    }
    cout << endl;
  }

  for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
       cout << "* ";
    }
    for(int j=1; j<=2*(n-i); j++){
      cout << "  ";
    }
    for(int j=1; j<=i; j++){
       cout << "* ";
    }
    cout << endl;
  }
  return 0;
}






// Inverted Pattern

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=n; i>=1; i--){
    for(int j=1; j<=i; j++){
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}





// 0-1 Pattern

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
        if((i+j)%2==0){
          cout << "1 ";
        }
        else{
          cout << "0 ";
        }
      }
    cout << endl;
  }
  return 0;
}









// Rhombus Pattern

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=n; j>i; j--){
      cout << "  ";
    }
    for(int j=1; j<=n; j++){
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}







// Number Pattern

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=n; j>i; j--){
      cout << "  ";
    }
    for(int j=1; j<=i; j++){
      cout << j << "   ";
    }
    cout << endl;
  }
  return 0;
}







// Palindromic Pattern

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=n; j>i; j--){
      cout << "  ";
    }
    for(int j=i; j>=1; j--){
      cout << j << " ";
    }
    for(int j=2; j<=i; j++){
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}






// Star Pattern

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=n; i++){
    for(int j=i; j<n; j++){
      cout << "  ";
    }
    for(int j=1; j<=2*i-1; j++){
      cout << "* ";
    }
    cout << endl;
  }
  for(int i=n; i>=1; i--){
    for(int j=i; j<n; j++){
      cout << "  ";
    }
    for(int j=1; j<=2*i-1; j++){
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}








// Zig-Zag Pattern

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  for(int i=1; i<=3; i++){
    for(int j=1; j<=n; j++){
      if((i%2==0 && j%4==0) || ((i+j)%4==0)){
          cout << "* ";
      }
      else{
          cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}








// Pascal's Truangle

int main(){
  int n;
  cout << "Type here a number = ";
  cin >> n;
  int num=1;
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      cout << "  ";
    }
    for(int j=0; j<=i; j++){
        if(j==0 || i==0){
            num =1;
        }
        else{
            num= num*(i-j+1)/j;
        }
        cout << num  << "   ";
    }
    cout << endl;
  }
  return 0;
}















