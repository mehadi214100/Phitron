#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;
// (XmodK)×((N−X)modK)
// when equal then max (even)
int main() {
    int n,k; cin>>n>>k;
    if(n%2==0) {
        cout<<(n/2)<<endl;
    }else{
       if(k>=n) cout<<(n/2)<<endl;
       else{
            cout<<(n%k)+1<<endl;
       }
    }
    for (int i = 0; i <= n; i++)
    {
        int res = ((i%k)*((n-i)%k));
        cout<<i<<sp<<(i%k)<<sp<<(n-i)%k<<sp<<res<<endl;
    }
    
    return 0;
}


