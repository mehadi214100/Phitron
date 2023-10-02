#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    ll n;cin>>n; ll arr[n];
    ll sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    
    ll total = (n*(n+1))/2;
    ll res =  total - sum;
    cout<<res;
    return 0;
}


