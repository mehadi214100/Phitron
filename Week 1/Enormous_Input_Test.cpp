#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int res = 0;
    fl(i,n){
        int x;cin>>x;
        if(x%k==0)res++;
    }
    cout<<res;
    return 0;
}


