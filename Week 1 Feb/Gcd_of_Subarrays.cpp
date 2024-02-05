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
        ll n,k;
        cin>>n>>k;
        ll sub = n*(n+1)/2;
        if(k<sub){
            cout<<-1<<endl;
        }else{
            ll num = k-(sub-1);
            cout<<num<<" ";
            for (int i = 0; i < n-1; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}