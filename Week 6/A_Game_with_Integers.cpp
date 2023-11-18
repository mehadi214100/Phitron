#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int ct = 0;
bool solve(int n){
    if(n%3==0 && ct<11){
        return true;
    }else if(ct>10){
        return false;
    }
    ct++;
    solve(n+1);
    solve(n-1);
}

int main() {
    int t;cin>>t;
    while (t--)
    {
       int n;cin>>n;
        if(solve(n)) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
        ct = 0;
    }
    
    return 0;
}


