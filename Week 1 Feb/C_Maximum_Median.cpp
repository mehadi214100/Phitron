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
    // cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll l=0,r=LONG_LONG_MAX,ans;
        while (l<=r)
        {
            ll mid = l+(r-l)/2;
            if(arr[n/2]>=mid){
                ans = mid;
                l = mid+1;
                continue;
            }
            ll op = 0;
            for (int i = n/2; i < n; i++)
            {
                ll diff = mid-arr[i];
                op+= diff;
                if(op>k){
                    break;
                }
            }
            if(op>k){
                r = mid-1;
            }else{
                ans = mid;
                l = mid+1;
            }
        }
        cout<<ans<<endl;
        

    }
    
    return 0;
}