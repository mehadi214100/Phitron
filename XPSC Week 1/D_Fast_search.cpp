#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int lower(int x,int arr[],int n){
        int l = 0,r=n-1;
        while (l<=r)
        {
            int mid = l+(r-l)/2;
            if(arr[mid]<x){
                l = mid+1;
            }else if(arr[mid]>x){
                r = mid-1;
            }
            else{
                r = mid-1;
            }
        }
        return l+1;
}


int upper(int x,int arr[],int n){
    int l = 0,r=n-1;
    while (l<=r)
    {
        int mid = l+(r-l)/2;
        if(arr[mid]<x){
            l = mid+1;
        }else if(arr[mid]>x){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return l;
}


int main() {
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cin>>q;
        for (int i = 0; i < q; i++)
        {
            int x,y;cin>>x>>y;
            int l = lower(x,arr,n);
            int u = upper(y,arr,n);
            if(l<=u) cout<<u-l+1<<" ";
            else cout<<0<<" ";
        
        }

           
    }
    
    return 0;
}