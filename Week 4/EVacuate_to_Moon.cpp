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
        ll n,m,h;cin>>n>>m>>h;
        ll car[n],charge[m];
        fl(i,n) cin>>car[i];
        fl(i,m) cin>>charge[i];
        sort(car,car+n,greater<int>());
        sort(charge,charge+m,greater<int>());
        
        ll res = 0;
        for (int i = 0; i < min(m,n); i++)
        {
            ll watt = charge[i]*h;
            if(watt>=car[i]){
                res += car[i];
            }else{
                res += watt;
            }
        }
        
        cout<<res<<endl;
    }
    
    return 0;
}


