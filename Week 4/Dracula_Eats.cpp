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
        int ct = 0;
        int day = 1;
        if(n==1){
            cout<<0<<endl;
        }else if(n==2){
            cout<<1<<endl;
        }else{
            day = 2;
            while (day<=n)
            {
                ct++;
                day += 7;
            }
            cout<<ct<<endl;
        }
    }
    
    return 0;
}


