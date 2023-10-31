#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;
 
int main() {
    ll t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
        ll i = 1;
        ll prev = i;
        while (i<=n)
        {
            prev = i;
            i = i*10;
            // cout<<i<<endl;
        }
        cout<<n-prev<<endl;
    }
    
    return 0;
}