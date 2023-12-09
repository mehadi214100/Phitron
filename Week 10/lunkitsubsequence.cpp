#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        long long int n;cin>>n;
        long long int arr[n];
        long long int zero=0,one=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==0)zero++;
            else if(arr[i]==1)one++;
        }
        long long int ans = pow(2,zero)*one;
        cout << ans << endl;
        
    }
    
    return 0;
}