#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

ll res(ll arr[],ll n,ll h){
    ll w = 0;
    for (int i = 0; i < n; i++)
    {
        if(h>arr[i]){
            w += h-arr[i];
        }
    }
    return w;
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll l = 1,r=INT_MAX,ans;
        while (l<=r)
        {
            ll height = l+(r-l)/2;
            ll water = res(arr,n,height);
            
            if(water<=x){
                ans = height;
                l = height+1; 
            }else{
                r = height-1;
            }
        }
        cout<<ans<<endl;
        
         
    }
    
    return 0;
}