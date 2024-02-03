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
        int i=n-1,j=0,k=0;
        while (j<=i)
        {
            ans[k] = arr[i];
            ans[k+1] = arr[j];
            i--;
            j++;
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