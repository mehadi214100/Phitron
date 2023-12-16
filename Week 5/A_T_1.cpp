#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n,q;
    int ct = 1;
    while (cin>>n>>q)
    {
        if(n==0 && q==0) break;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        cout<<"CASE# "<<ct<<':'<<endl;
        while (q--)
        {
            int x;
            cin>>x;
            int l= 0,r=n-1,ans = -1;
            while (l<=r)
            {
                int mid = l + (r-l)/2;
                if(arr[mid]==x){
                    ans = mid;
                    r = mid-1;
                }else if(arr[mid]>x){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }
            if(ans==-1){
                cout<<x<<" not found"<<endl;
            }else{
                cout<<x<<" found at "<<ans+1<<endl;
            }
        }
        ct++;
        
    }
    
    return 0;
}