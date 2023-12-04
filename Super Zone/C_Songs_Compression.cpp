#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    ll t ,m;
    cin>>t>>m;
    ll arr[t];
    ll orginal = 0;
    ll compress = 0;
    for (int i = 0; i < t; i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        orginal += n1;
        compress += n2;
        arr[i] = n1-n2;
    }
    if(compress>m) cout<<-1;
    else{
        if(orginal<=m) cout<<0;
        else{
            sort(arr,arr+t,greater<>());
            ll diff = orginal-m;
            ll ct = 0;
            for (int i = 0; i < t; i++)
            {
                if(diff>0){
                    diff -= arr[i];
                    ct++;
                }else{
                    break;
                }
            }
            cout<<ct<<endl;
            
        }
        
    }
    return 0;
}