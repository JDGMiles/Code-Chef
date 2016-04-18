#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int upto=100;
  int maxdigits=158;
  char table[upto][maxdigits];
  for(int i=0; i<upto; i++){
    for(int j=0; j<maxdigits; j++){
      table[i][j]=0;
    }
  }
  table[0][158]=1;
}
