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
        string a,b,c;
        cin>>a>>b>>c; 
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==c[i] || b[i]==c[i]){
                
                if(a[i]!=b[i]){
                    check = false;
                    break;
                }
            }
        }
        if(check)sy;
        else sn;
            
    }
    
    return 0;
}