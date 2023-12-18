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
    cin>>t;
    while (t--)
    {
        int n,h;
        cin>>n>>h;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int l = 0;
        int r = INT_MAX;
        int ans;
        while (l<=r)
        {
            int mid = l+(r-l)/2;
            
            int res = h;
            for (int i = 0; i < n; i++)
            {
                
                if(arr[i]>mid){
                        if(res>arr[i]){
                            res -= arr[i];
                        }else{
                            res = -1;
                            break;
                        }
                }
            }

            if(res>0){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}