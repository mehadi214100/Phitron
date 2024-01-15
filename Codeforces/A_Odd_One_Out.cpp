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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)cout<<c<<endl;
        else if(b==c) cout<<a<<endl;
        else cout<<b<<endl;
    }
    
    return 0;
}