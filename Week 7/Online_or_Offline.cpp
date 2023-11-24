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
        double n,m;
        cin>>n>>m;
        // double online = ceil(n-(n*(10*1.0/100)));
        double online = (n-(n*0.1));
        // cout<<online<<sp<<m<<endl;
        if(online<m) cout<<"ONLINE"<<endl;
        else if(m<online) cout<<"DINING"<<endl;
        else cout<<"EITHER"<<endl;

    }
    
    return 0;
}


