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
        int x,y; cin >> x>>y;
        if(y%x==0){
            cout << 1<<sp<<y/x << endl;
        }else{
            cout << 0<<sp<<0 << endl;
        }
        
        
    }
    
    return 0;
}