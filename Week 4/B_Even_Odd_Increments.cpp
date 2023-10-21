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
        ll n,q;cin>>n>>q;
        ll arr[n];
        ll oddCount = 0,oddSum = 0,evenCount = 0,evenSum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            ll x = arr[i];
            if(x%2==0){
                evenCount++;
                evenSum += x;
            }else{
                oddCount++;
                oddSum +=x;
            }
        }
        bool odd = true, even = true;
        while (q--)
        {
            ll sign,num; cin>>sign>>num;
            if(sign==0){
                // even work
                if(even){
                    ll ct = evenCount*num;
                    evenSum += ct;
                    if(num%2==0){
                        even = true;
                    }else{
                        even = false;
                    }
                }
                if(!odd){
                    ll ct = oddCount*num;
                    oddSum += ct;
                    if(num%2==0){
                        odd = false;
                    }else{
                        odd = true;
                    }
                }

            }else{
                
                if(odd){
                    ll ct = oddCount*num;
                    oddSum += ct;
                    // cout<<oddCount<<sp<<num<<sp<<ct<<oddSum<<endl;
                    if(num%2==0){
                        odd = true;
                    }else{
                        odd = false;
                    }
                }
                if(!even){
                    ll ct = evenCount*num;
                    evenSum += ct;
                    if(num%2==0){
                        even = false;
                    }else{
                        even = true;
                    }
                }


            }
            ll res = oddSum + evenSum;
            cout<<res<<endl;
        }
        

        
    }
    
    return 0;
}


