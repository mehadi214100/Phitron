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
        int a,b,c;
        cin>>a>>b>>c;
        int l1 = a-1;
        int l2 = abs(b-c)+(c-1);
        if(l1==l2)cout<<3<<endl;
        else if(l1<l2)cout<<1<<endl;
        else cout<<2<<endl;
    }
    
    return 0;
}


