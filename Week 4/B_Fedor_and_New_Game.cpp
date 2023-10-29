#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}


int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    map<int,int>mp;
    for (int i = 0; i < m+1; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int ct = 0;
    
    for (int i = 0; i < m; i++)
    {
        int bit = arr[i]^arr[m];
        int c = countSetBits(bit);
        // cout<<arr[i]<<sp<<arr[m]<<sp<<c<<endl;
        if(c<=k){
            ct++;
        }
        
    }
    cout<<ct;
    return 0;
}


