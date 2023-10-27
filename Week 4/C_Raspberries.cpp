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
        int n,k;cin>>n>>k;
        int arr[n];
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            mn = min(arr[i]%k,i);
        }
        cout<<mn<<endl;
        
    }
    
    return 0;
}


