#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n,k;cin>>n>>k;
    int ct = 0;
    while (n>0)
    {   ct++;
        n/=k;
    }
    cout<<ct;
    
    return 0;
}


