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
        int x,y,z;
        cin>>x>>y>>z;
        int ct = 1;
        x -= z;
        while (x>0)
        {
            ct++;
            x -= y;
        }
        cout<<ct<<endl;

    }
    
    return 0;
}