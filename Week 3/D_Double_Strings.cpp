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
        string arr[n];
        map<string,bool>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            mp[arr[i]] = true;
        }
        for (int i = 0; i < n; i++)
        {
            string s =  arr[i];
            bool check = false;
            for (int j = 1; j < s.length(); j++)
            {
                string pre = s.substr(0,j),suff = s.substr(j,s.length()-j);
                if(mp[pre] && mp[suff]){
                    check |= true; 
                }
            }
            cout<<check;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}


