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
        string s; cin>>s;
        ll arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if(c=='R'){
                arr[i] = n-i-1;
            }else{
                arr[i] = i;
            }
            sum += arr[i];
        }
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            ll move1 = n-1-arr[i];
            ll move2 = arr[i]-0;
            if(move1>=move2){
                sum = sum-arr[i];
                sum = sum + move1;
            }else{
                sum = sum-arr[i];
                sum = sum + move2;
            }
            cout<<sum<<sp;

            
        }
        
        cout<<endl;
        
    }
    
    return 0;
}


