#include <iostream>
using namespace std;

int L[200],R[200];

void solve() {
    int n;
    cin>>n;
    for(int i=0 ; i< n ; i++) {
        scanf("%d", &L[i]);
    }
    int m=0;
    for(int i=0 ; i< n ; i++) {
        scanf("%d", &R[i]);
        int c=L[i]*R[i];
        int d = L[m]*R[m];
        if (c>d || (c==d && R[i]>R[m])) {
            m=i;
        }
    }
    cout<<m+1<<endl;
}

int main(int argc, const char **argv) {
    if(argc>=2) {
        freopen(argv[1], "r", stdin);
    }
    int T;
    cin>>T;
    for(int t=1 ; t<=T ; t++) {
        solve();
    }
}
