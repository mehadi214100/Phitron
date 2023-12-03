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
        int n,a,b;
        cin>>n>>a>>b;
        int even = n/2;
        int odd = n - even;
        // cout<<even<<sp<<odd<<endl;
        int res = (even*a)+(odd*b);
        cout<<res<<endl;
    }
    
    return 0;
}