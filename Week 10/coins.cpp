#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        long long int n,k;cin>>n>>k;
        if(n%k==0 || n%2==0 || (n-k)%2==0)cout << "YES" << endl;
        else{
            if((n%k)%2==0 || (n%2)%k==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
    }
    
    return 0;
}