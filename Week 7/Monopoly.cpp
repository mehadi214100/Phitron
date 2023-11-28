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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum = a+b+c+d;
        if(a>(sum-a) || b>(sum-b) || c>(sum-c) || d>(sum-d))sy;
        else sn;
    }
    
    return 0;
}


