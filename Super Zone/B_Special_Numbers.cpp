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
        int n,k;cin>>n>>k;
        int c = 0;
        int sum = 0;
        int i = 0;
        while (c<k)
        {
            sum += pow(n,i);
            i++;
            c++;
            cout<<sum<<endl;
        }
        cout<<sum<<endl;
        
        
    }
    
    return 0;
}


