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
        int n;cin>>n;
        int arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        ll root = sqrt(sum);
        ll res = root*root;
        if(res==sum)sy;
        else sn;
    }
    
    return 0;
}