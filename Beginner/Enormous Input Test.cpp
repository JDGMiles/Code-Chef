#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n;
  cin >> k;
  int count=0;
  int t=0;
  for (int i=0; i<n; i++){
    cin >> t;
    if(t%k==0){count++;}
  }
  cout << count;
}
