#include <iostream.h>
using namespace std;

int main() {
  bool found=0;
  int n;
  while(!found){
    cin >> n;
    if(n==42){found=1;}
    else{cout << n << endl;}
  }
}
