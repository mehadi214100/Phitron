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
        int a,b;
        cin>>a>>b;
        int diff = abs(a-b);
        if(diff%2==0)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;      
    }
    
    return 0;
}