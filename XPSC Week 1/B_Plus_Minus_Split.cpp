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
        int p = 0,m=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='+'){
                p++;
            }else{
                m++;
            }
        }
        
        int diff = abs(p-m);
        cout<<diff<<endl;
    }
    
    return 0;
}