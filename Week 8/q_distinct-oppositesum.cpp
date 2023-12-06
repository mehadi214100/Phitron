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
        int n; cin >> n;
        int mid = n/2;
        for(int i = mid ; i>=1;i--){
            cout<<i << " ";
        }
        for(int i = mid+1 ; i<=n;i++){
            cout<<i << " ";
        }
        cout<< endl;
        
        
    }
    
    return 0;
}