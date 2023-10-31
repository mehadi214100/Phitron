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
        string s; cin>>s;
        map<int,char>mp;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            int digit = arr[i];
            char c = s[i];
            if(mp[digit]){
                if(mp[digit]!=c){
                    sn;
                    check = false;
                    break;
                }

            }else{
                mp[digit] = c;
            }
        }
        if(check) sy;
       
        
        
    }
    
    return 0;
}