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
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum<n) cout<<"NO"<<endl;
        else{
            if(k==0){
                if(sum%n!=0) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }else cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}


