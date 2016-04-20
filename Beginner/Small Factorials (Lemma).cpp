#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int upto=101;
  int maxdigits=160;
  bool leadingzeros=1;

  int table[upto][maxdigits];
  for(int i=0; i<upto; i++){
    for(int j=0; j<maxdigits; j++){
      table[i][j]=0;
    }
  }

  table[0][maxdigits-1]=1;

  for(int i=1; i<upto; i++){

    for(int j=maxdigits-1; j>0; j--){
      table[i][j]=table[i-1][j]*(i);
    }
    for(int j=maxdigits-1; j>0; j--){
      table[i][j-1]+=table[i][j]/10;
      table[i][j]=table[i][j]%10;
    }
  }
  for(int i=0; i<upto; i++){
    cout << i << "! = ";
    leadingzeros=1;
    for(int j=0; j<maxdigits; j++){
      if(leadingzeros==1 && table[i][j] != 0){leadingzeros=0;}
      if(leadingzeros==0){cout << table[i][j];}
    }
    cout << endl;
  }
}
