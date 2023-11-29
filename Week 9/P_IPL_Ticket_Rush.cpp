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
        int n,x;
        cin>>n>>x;
        if(n-x<=0) cout<<0<<endl;
        else cout<<n-x<<endl;
    }
    
    return 0;
}


