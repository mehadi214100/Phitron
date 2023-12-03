#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int s,b,h;
        cin>>s>>b>>h;
        int bh = b+ h;
        if(bh==s) {
            int res = s + s -1;
            cout<<res<<endl;
        } else if(s>bh) {
            int res = 2*bh + 1;
            cout<<res<<endl;
        } else {
            int res = s + s -1;
            cout<<res<<endl;
        }
    }
    return 0;
}