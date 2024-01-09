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
        int n,k;
        cin>>n>>k;
        int data = ceil(((n-1)*1.0)/k);
        cout<<data+1<<endl;
    }
    
    return 0;
}