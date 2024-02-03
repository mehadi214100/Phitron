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
    // cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans[n+1];
        int i=0,j=1,k=0;
        if(n%2==1)ans[n-1] = arr[n-1];
        for (int i = 0; j<n; i+=2,j+=2)
        {
            ans[k] = arr[j];
            ans[k+1] = arr[i];
            k+=2;
        }
        int ct=0;
        for (int i = 1; i < n-1; i++)
        {
            if(ans[i]<ans[i-1] && ans[i]<ans[i+1]){
                ct++;
            }
        }
        cout<<ct<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
              
    }
    
    return 0;
}