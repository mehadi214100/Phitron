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
        string s;cin>>s;
        if(s.length()%2==0 && s[0]!=')' && s[s.length()-1]!='('){
            sy;
        } else{
            sn;
        }
    }
    
    return 0;
}