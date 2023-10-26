#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;
// Mehadi Hasan
int main() {
    ll t;cin>>t;
    while (t--)
    {
        ll n,q;
        cin>>n>>q;
        multimap<ll,ll>mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;cin>>x;
            mp.insert({x,i});
        }
        while (q--)
        {
            ll s,d;
            cin>>s>>d;
            auto it = mp.find(s);
            auto it2 = mp.find(d);

            if(it!=mp.end() && it2!=mp.end()){
                auto source = mp.lower_bound(s);
                auto desti = mp.upper_bound(d);
                if(((*desti).first)!=d){
                    desti--;
                }
                ll soIn = (*source).second;
                ll desIn =(*desti).second;
                if(soIn<=desIn) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }else{
                cout<<"NO"<<endl;
            }
        }
        
    }
    

    return 0;
}


