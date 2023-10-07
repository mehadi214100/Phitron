#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n;cin>>n;int arr[n+1];
    arr[0] = 0;
    fl(i,n){
        int x;cin>>x;
        arr[i+1] = x+arr[i];
    }
    int q;cin>>q;
    while (q--)
    {
        int x,y;cin>>x>>y;
        int res = arr[y+1]-arr[x];
        cout<<res<<endl;
    }
    
    
    return 0;
}


