#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    ll n;cin>>n;
    ll arr1[n],arr2[n],res1[n+1],res2[n+1];
    res1[0] = 0;
    res2[0] = 0;
    fl(i,n){
        ll x;
        cin>>x;
        arr1[i] = x;
        arr2[i] = x;
        res1[i+1] = res1[i]+x;
    }
    sort(arr2,arr2+n);
    fl(i,n){
        res2[i+1] = res2[i]+arr2[i];
    }
    ll q;cin>>q;
    while (q--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==1){
            ll ans = res1[c]-res1[b-1];
            cout<<ans<<endl;
        }else{
            ll ans = res2[c]-res2[b-1];
            cout<<ans<<endl;
        }
    }
    

    return 0;
}


