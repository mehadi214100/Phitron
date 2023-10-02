#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    ll x,y;cin>>x>>y;
    int ct = 0;
    while (x<=y)
    {
        x *= 2;
        ct ++;
    }
    cout<<ct;
    return 0;
}


