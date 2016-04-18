#include <bits/stdc++.h>
using namespace std;

int a[200],b[200];

void solve() {
    int n;
    cin>>n;
    for(int i=0 ; i< n ; i++) {
        scanf("%d", &a[i]);
    }
    int m=0;
    for(int i=0 ; i< n ; i++) {
        scanf("%d", &b[i]);
        int c=a[i]*b[i];
        int d = a[m]*b[m];
        if (c>d || (c==d && b[i]>b[m])) {
            m=i;
        }
    }
    cout<<m+1<<endl;
}

int main(int argc, const char **argv) {
    if(argc>=2) {
        freopen(argv[1], "r", stdin);
        //freopen(argv[2], "w", stdout);
    }
    int T;
    cin>>T;
    for(int t=1 ; t<=T ; t++) {
        solve();
    }
}
