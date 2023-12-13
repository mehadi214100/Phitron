#include <bits/stdc++.h>
// # mehadi
using namespace std;

void solve(){
            int x,y,s;
            cin>>x>>y>>s;
            if(x>=y) cout<<x<<endl;
            else{
                int diff = y-x;
                if(diff==s){
                    cout<<y<<endl;
                }else if(diff<s){
                    cout<<y<<endl;
                }
                else{
                    int time = x+s;
                    cout<<time+(y-time)*2<<endl;
                }
            }
}

int main() {
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}


