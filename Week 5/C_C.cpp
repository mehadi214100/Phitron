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
        ll n;cin>>n;
        map<int,int>m;
        
        int arr1[n];
        int arr2[n];

        int ct = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
            m[arr1[i]]++;
            ct = max(ct,m[arr1[i]]);
        }
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
            m[arr2[i]]++;
            ct = max(ct,m[arr2[i]]);
        }
        
        cout<<ct<<endl;
        

    }
    
    return 0;
}


