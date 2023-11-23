#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
// #define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        double f,s;cin>>f>>s;
        double fp = 100-(100*(f*1.0/100));
        double sp = 200-200*(s*1.0/100);
        // cout<<fp<<" "<<sp<<endl;
        if(fp<sp) cout<<"FIRST"<<endl;
        else if(fp>sp) cout<<"SECOND"<<endl;
        else cout<<"BOTH"<<endl;
        // else cout<<"BOTH"<<endl;

    }
    
    return 0;
}


