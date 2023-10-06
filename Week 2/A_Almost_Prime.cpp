#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

bool isprime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for (int i = 2; i < n/2+1; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    int n;cin>>n;
    int ct = 0;
    for (int i = 1; i <= n; i++)
    {
        int cc = 0;
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0){
                if(isprime(j)){
                    cc++;
                }
            }
        }
        if(cc==2){
            ct++;
            
        }
        
    }
    cout<<ct;
    
    return 0;
}


