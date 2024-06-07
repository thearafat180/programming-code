#include <bits/stdc++.h>
using namespace std;



// Rectanguler Stars

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
