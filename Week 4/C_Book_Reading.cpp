#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<int>cycle;
        for (ll i = m;; i+=m)
        {
            cycle.push_back(i%10);
            if(i%10==0) break;
        }
        ll sum = 0,res = 0;
        for(auto v:cycle){
            sum += v;
        }
        ll div = (n/m)/cycle.size();
        ll rem = (n/m)%cycle.size();
        res +=  (div*sum);
        for (int i = 0; i < rem; i++)
        {
            res += cycle[i];
        }
        // cout<<cycle.size()<<sp<<div<<sp<<rem<<sp<<res<<endl;
        cout<<res<<endl;
        

    }
    
    return 0;
}


