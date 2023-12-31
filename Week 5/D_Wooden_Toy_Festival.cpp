#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int counter(int arr[],int n,int mid){
    int ct = 1;
    int current = arr[0]+mid;
    for (int i = 0; i < n; i++)
    {
        if(abs(current-arr[i])>mid){
            ct++;
            current = arr[i]+mid;
        }
    }
    return ct;
    
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int l=0,r=INT_MAX,ans;
        while (l<=r)
        {
            int mid = l+(r-l)/2;
            int number = counter(arr,n,mid);
            if(number<=3){
                r = mid-1;
                ans = mid;
            }else{
                l = mid+1;
            }
        }
        cout<<ans<<endl;
        
          
    }
    
    return 0;
}