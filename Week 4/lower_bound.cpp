#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n;cin>>n;
    vector<int>v(n);
    fl(i,n) cin>>v[i];
    int x; cin>>x;
    auto it = lower_bound(v.begin(),v.end(),x);
    int index = it-v.begin();
    cout<<index<<endl;
    return 0;
}


