#include <iostream>
using namespace std;

int main() {
  int centwithdrawal;
  cin >> centwithdrawal;
  centwithdrawal=centwithdrawal*100;
  float dollarbalance;
  cin >> dollarbalance;
  int centbalance = dollarbalance*100;

  if(centwithdrawal%500==0 && (centbalance-centwithdrawal-50)>=0){
    cout << (centbalance-centwithdrawal-50)/100 << "." << (centbalance-centwithdrawal-50)%100 << (centbalance-centwithdrawal-50)%10;
  }
  else{
    cout << (centbalance/100) << "." << centbalance%100 << centbalance%10;
  }

}
