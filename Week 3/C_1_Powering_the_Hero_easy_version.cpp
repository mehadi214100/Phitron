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
        int arr[n];
        fl(i,n) cin>>arr[i];
        ll ct = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==0){
                ll mx = 0;
                int index=0;
                for (int j = 0; j < i; j++)
                {
                    if(arr[j]>mx){
                        mx = arr[j];
                        index = j;
                    }
                    // cout<<arr[j]<<sp;
                }
                arr[index] = 0;
                ct += mx;
            }
        }
        cout<<ct<<endl;

    }
    
    return 0;
}


