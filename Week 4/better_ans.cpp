#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n;cin>>n;
    int arr[n];
    fl(i,n) cin>>arr[i];
    int x;cin>>x;
    int ans = -1;
    int l = 0, r = n-1;
    while (l<=r)
    {
       int mid = l+(r-l)/2;
       if(arr[mid]==x){
            ans = mid;
            r = mid-1;
            // l = mid +1;

       }else if(arr[mid]>x){
            r = mid-1;
       }else{
            l = mid+1;
       }
    }
    cout<<ans;
    
    return 0;
}


