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
        int arr[n];
        fl(i,n) cin>>arr[i];
        map<int,int>mp;
        bool chek = true;
        for (int i = n-1; i >= 0; i--)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]>1){
                chek = false;
                cout<<i-0+1<<endl;
                break;
            }
        }
        if(chek) cout<<0<<endl;
    }
    
    return 0;
}


