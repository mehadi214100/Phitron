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
        int x,y;
        cin>>x>>y;
        int twopack = x*2;
        if(twopack<=y){
            cout<<5*x<<endl;
        }else{
            cout<<y*2+x<<endl;
        }
    }
    
    return 0;
}


