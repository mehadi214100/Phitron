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
        int n,q;cin>>n>>q;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i = 0; i < q; i++)
        {
            int x;
            cin>>x;
            auto data = upper_bound(arr,arr+n,x);

            int diff = data-arr;
            cout<<diff<<" ";

        }
            
    }
    
    return 0;
}