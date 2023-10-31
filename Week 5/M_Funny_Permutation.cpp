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
        int n;cin>>n;
        if(n==3) cout<<-1<<endl;
        else{
            cout<<n<<sp;
            cout<<n-1<<sp;
            for (int i = 1; i < n-1; i++)
            {
                cout<<i<<sp;
            }
            cout<<endl;
            
        }
    }
    
    return 0;
}