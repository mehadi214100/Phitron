#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        map<int,int>m;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
            mx = max(mx,m[arr[i]]);
        }
        cout<<n-mx<<endl;
    }
    
    return 0;
}


