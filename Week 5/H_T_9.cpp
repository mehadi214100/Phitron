#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

ll isvalid(ll arr[],ll n,ll mid,ll m){
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>mid){
            sum += arr[i]-mid;
        }
    }
    return sum;
    
}

int main() {
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n;
        ll m;
        cin>>n>>m;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        ll l = 0,r=LONG_LONG_MAX;
        ll ans;
        while (l<=r)
        {
            ll mid = l+(r-l)/2;
            ll sum = isvalid(arr,n,mid,m);
            if(sum>=m){
                ans = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        cout<<ans;

        
        
    }
    
    return 0;
}