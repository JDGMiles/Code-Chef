#include <iostream>
#include <cmath>
using namespace std;

int fives(int rawnumber){
  int power=1;
  int count=0;
  while(pow(5, power)<=rawnumber){
    count += rawnumber/pow(5, power);
    power++;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  int numbertobeanalysed=0;
  for(int i=0; i<n; i++){
    cin >> numbertobeanalysed;
    cout << fives(numbertobeanalysed) << endl;
  }
}
