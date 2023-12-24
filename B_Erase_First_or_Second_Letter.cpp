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
        string s;
        cin>>s;
        unordered_set<char>ss;
        ll ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            ss.insert(s[i]);
            ans += ss.size();
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}