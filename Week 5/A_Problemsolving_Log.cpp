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
           string s;cin>>s;
           map<char,int>m;
           for (int i = 0; i < n; i++)
           {
             m[s[i]]++;
           }
           int ct = 1;
           int res = 0;
           for (char i = 'A'; i <= 'Z'; i++)
           {
                if(m[i]>=ct) res++;
                ct++;
           }
           cout<<res<<endl;
    }
    
    return 0;
}