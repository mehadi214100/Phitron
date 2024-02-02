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
        if((n%2==0) && k%2==1){
            sn;
        }else if((n%2==1) && (k%2==0)){
            sn;
        }else{
            ll num = k*k;
            if(num>n) sn;
            else {
                sy;
            }
        }
    }
    
    return 0;
}