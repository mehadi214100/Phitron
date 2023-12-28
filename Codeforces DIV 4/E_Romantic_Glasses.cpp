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
        int n;cin>>n;
        int arr[n+1];
        unordered_map<ll,ll>difference;
        ll odd = 0,even = 0;
        bool check = false;
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            if(i%2==0) even+= arr[i];
            else odd+= arr[i];
            ll diff = odd-even;
            if(diff==0 || difference.find(diff)!=difference.end()){
                check = true;
            }
            difference[diff] = i;
        }
        if(check)sy;
        else sn;
    }
    
    return 0;
}