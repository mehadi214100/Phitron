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
        ll n;cin>>n;
        ll k;cin>>k;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll mx =  LLONG_MIN,mn=LLONG_MAX,ct=0,i=0,j=0;
        
        while (j<n)
        {
            mx = max(mx,arr[j]);
            mn = min(mn,arr[j]);
            if(mx-mn>k){
                
            }
            ct += j-i+1;
            cout<<mx<<sp<<mn<<sp<<i<<sp<<j<<sp<<ct<<endl;
           
            j++;
        }
        cout<<ct<<endl;

    }
    
    return 0;
}