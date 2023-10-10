#include <bits/stdc++.h>
#define sp " "
using namespace std;

void solve(){
        int n;cin>>n;
        int n1 = 1;
        int n2 = 2;
        int n3 = n-3;
        if(n<7){
            cout<<"NO"<<endl;;
        }
        else if(n3%3!=0 && n3!=n1 && n3!=n2){
            cout<<"YES"<<endl;
            cout<<n1<<sp<<n2<<sp<<n3<<endl;
        }else if((n3-2)%3!=0  && (n3-2)>(n2+2)){
            cout<<"YES"<<endl;
            cout<<n1<<sp<<n2+2<<sp<<n3-2<<endl;
        }else{
            cout<<"NO"<<endl;
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


