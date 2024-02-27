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
        int total = 4*n-2;
        if(total==k){
            int res = ceil(k*1.0)/2+1;
            cout<<fixed<<setprecision(0)<<res;
        }else{
            if(k%2==0){
                cout<<fixed<<setprecision(0)<<k/2;
            }else{
                cout<<fixed<<setprecision(0)<<ceil(k*1.0/2);
            }
        }
        cout<<endl;
    }
    
    return 0;
}