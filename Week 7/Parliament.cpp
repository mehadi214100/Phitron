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
        int n,x;
        cin>>n>>x;
        int remain = n-x;
        if(remain>x)sn;
        else sy;
    }
    
    return 0;
}


