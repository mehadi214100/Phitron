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
        int n,q;
        cin>>n>>q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < q; i++)
        {
            int x;cin>>x;
            
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
            cout<<l<<endl;

        }

           
    }
    
    return 0;
}