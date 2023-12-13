#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;
int mod = 1e9+7;
int main() {
    int t;cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            char c= s[i];
            if(c=='a'||c=='i'||c=='o'||c=='e'||c=='u'){
                ct++;
            }
        }
        int res = ct/k;
        if(ct==2 && k==1)cout<<1<<endl;
        else if(k==1) cout<<0<<endl;
        else cout<<res<<endl;
        

    }
    
    return 0;
}


