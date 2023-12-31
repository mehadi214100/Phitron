#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;char c; cin>>n>>c;
        string s;cin>>s;
        bool check = true;
        for(auto d:s ){
            if(d!=c){
                check = false;
                break;
            }
        }
        if(check) cout<<0<<endl;
        else{
            for (int i = n/2; i < n; i++)
            {
                if(s[i]==c){
                    cout<<1<<endl<<i+1<<endl;
                    check = true;
                    break;
                }
            }
            if(!check){
                cout<<2<<endl<<n<<sp<<n-1<<endl;
            }
            
        }
    }
    
    return 0;
}