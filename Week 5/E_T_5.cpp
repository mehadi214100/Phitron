#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int sumOfdigit(ll n){
    ll sum = 0;
    while (n>0)
    {
        sum += n%10;
        n/=10;
    }
    return sum;
    
}

int main() {
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n,s;
        cin>>n>>s;
        ll l = 1,r = n,ans = -1;

        while (l<=r)
        {
            ll mid = l+(r-l)/2;
            // cout<<mid<<endl;
            if(abs(mid-sumOfdigit(mid))>=s){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        if(ans==-1){
            cout<<0;
        }else {
            ll res = n-ans+1;
            cout<<res;
        }
           
    }
    
    return 0;
}