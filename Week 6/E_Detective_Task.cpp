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
        string s;
        cin>>s;
        int r = s.length()-1;
        int l = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='0'){
                r = i;
                break;
            }
        }
        for (int i = s.length()-1; i >= 0; i--)
        {
            if(s[i]=='1'){
                l = i;
                break;
            }
        }
        int ans = r-l+1;
        cout<<ans<<endl;
    }
    
    return 0;
}