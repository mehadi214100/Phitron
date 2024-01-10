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
        int n,m;cin>>n>>m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int mx = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            int x;cin>>x;
            mx = max(mx,x);
        }
        int st = n-mx;
        sort(arr+st,arr+n);
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<sp;
        }
        cout<<endl;
        
    }
    
    return 0;
}