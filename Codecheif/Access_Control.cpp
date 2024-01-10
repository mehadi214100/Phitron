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
        int n,x;cin>>n>>x;
        string s;cin>>s;
        int remain = 0;
        bool ok = true;
        for (int i = 0; i < n ; i++)
        {
            if(s[i]=='0'){
                remain-=1;
                if(remain<0){
                    sn;
                    ok = false;
                    break;
                }
            }else{
                remain = x;
            }
        }
        if(ok){
            if(remain>=0)sy;
            else sn;
        }
              
    }
    
    return 0;
}