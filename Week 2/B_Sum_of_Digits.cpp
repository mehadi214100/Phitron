#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;


int main() {
    string s;cin>>s;
    int ct = 0;
    while (s.length()!=1)
    {
        int num = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int n = s[i]-'0';
            num+=n;
        }
        ct++;
        s = to_string(num);
    }
    
    cout<<ct;
    return 0;
}


