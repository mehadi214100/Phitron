#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        ll arr[n];
        vector<int>v;
        ll sum = 0;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]<=0){
                sum+= (arr[i]*-1);
            }else{
                sum+= arr[i];
            }
           
        }
        int ct = 0;
        if(arr[0]<0){
            check = true;
            ct++;
        }
        for (int i = 1; i < n; i++)
        {
            if(check==true){
                if(arr[i]<=0) continue;
                else{
                    check = false;
                }
            }else{
                if(arr[i]<0){
                    check = true;
                    ct++;
                }
            }
        }
        cout<<sum<<sp<<ct<<endl;
        
    }
    
    return 0;
}


