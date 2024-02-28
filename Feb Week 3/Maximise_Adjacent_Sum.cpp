#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

ll power(ll a,ll b){
    if(b==0){
        return 1;
    }
    ll x = power(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
    
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int sum =0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);

        int prev = arr[n-1];

        for (int i = n-2; i >= 0; i-=2)
        {
            
            sum+= arr[i]+prev;
            prev = arr[i];

        }
        prev = arr[n-1];
        for (int i = n-3; i >= 0; i-=2)
        {
            
            sum+= arr[i]+prev;
            prev = arr[i];

        }
        

        
        cout<<sum<<endl;
        
    }
    
    return 0;
}