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
        int a;cin>>a;
        if(a%2==0 && a%7==0) cout<<"Alice"<<endl;
        else if(a%2==1 && a%9==0)cout<<"Bob"<<endl;
        else cout<<"Charlie"<<endl;
    }
    
    return 0;
}


