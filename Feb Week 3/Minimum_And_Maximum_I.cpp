#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

ll power(ll a,ll b){
    if(b==0){
        return 1;
    }
    ll x = power(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
    
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        ll x;cin>>x;
        ll n = x/2;
        ll sum = ((n*(n+1))/2)*2;
        
        if(x%2==1){
            sum += (x/2)+1;
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}