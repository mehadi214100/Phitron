#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int fact(int n){
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    // cout<<"Res"<<res<<endl;
    return res;
    
}

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int f1 = fact(n);
        int f2 = fact(n-2);
        int res = f1/f2;
        cout<<res<<endl;
    }
    
    return 0;
}


