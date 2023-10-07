#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n;cin>>n;
    int arr[n];
    int mx = 0;
    fl(i,n) {
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }
    int res= 0;
    int ans;
    for (int k = 2; k <=mx ; k++)
    {
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%k==0){
                ct++;
            }
        }
        if(ct>res){
            res = ct;
            ans = k;
        }
    }
    cout<<ans;
    
    return 0;
}


