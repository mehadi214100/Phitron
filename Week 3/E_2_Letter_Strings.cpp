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
        string arr[n];
        map<char,int>fast;
        map<char,int>second;
        map<string,int>full;


        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            fast[arr[i][0]]++;
            second[arr[i][1]]++;
            full[arr[i]]++;
        }
        ll ct = 0;
        for (int i = 0; i < n; i++)
        {
            ll all = full[arr[i]]-1;
            ll ff = fast[arr[i][0]]-1-all;
            ll ss = second[arr[i][1]]-1-all;

            ll c = ff+ss;
            // cout<<ff<<sp<<ss<<sp<<all<<sp<<c<<endl;
            fast[arr[i][0]]--;
            second[arr[i][1]]--;
            full[arr[i]]--;
            ct+=c;
        }
        cout<<ct<<endl;
    }
    
    return 0;
}


