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
        string s;cin>>s;
        
        int count = n;
        for (int i = 1; i < n-1; i++)
        {
            if(s[i-1]==s[i+1]) count--;
        }
        cout<<count-1<<endl;
    }
    
    return 0;
}


