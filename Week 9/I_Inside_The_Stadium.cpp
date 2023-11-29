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
        int sum = 0;
        int ct = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin>>x;
            sum += x;
            double strike = (sum*1.0/i)*100;
            if(fabs(strike-100)<=1e-15)ct++;
        }
        cout<<ct<<endl;
        

    }
    
    return 0;
}