#include <bits/stdc++.h>
#define ll long long int
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define sp " "
using namespace std;

void solve(){
        int n;cin>>n;
        int k;cin>>k;
        int arr[n];
        ll mx = 1;
        for (int i = 0; i < n; i++)
        {
           ll x;cin>>x;
           mx *= x;
        }
        if(2023%mx==0){
            sy;
            cout<<2023/mx<<sp;
            for (int i = 0; i < k-1; i++)
            {
                cout<<1<<sp;
            }
            cout<<endl;
            
        }else{
            sn;
        }
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();

    }
    
    return 0;
}