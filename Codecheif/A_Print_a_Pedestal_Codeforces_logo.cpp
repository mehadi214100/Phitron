#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
#define nl "\n"
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%3==0){
            int d = n/3;
            cout<<d<<sp<<d+1<<sp<<d-1<<endl;
        }else{
            if(n!=7){
                int d = n/3;
                cout<<d+1<<sp<<d+2<<sp<<(n-(d+2)-(d+1))<<nl;
            }else{
                cout<<2<<sp<< 4 <<sp<<1<<nl;
            }
        }
    }
    
    return 0;
}


