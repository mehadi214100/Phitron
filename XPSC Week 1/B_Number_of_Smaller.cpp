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
        int n, m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>arr2[i];
        }
        
        int j=0;
        for (int i = 0; i < m; i++)
        {
            while (arr1[j]<arr2[i] && j<n)
            {
                j++;
            }
            cout<<j<<sp;
        }
        
        
        
    }
    
    return 0;
}