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
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n],arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
        }
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if(!(arr[i]*2<arr2[i] || arr2[i]*2<arr[i])) ct++;
        }
        cout<<ct<<endl;
        
    }
    
    return 0;
}