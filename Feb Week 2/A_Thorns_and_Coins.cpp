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
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]!='*'){
                if(s[i]=='@')ct++;
                
            }else {
               if(i!=n-1){
                if( s[i+1]=='*'){
                    break;
                }
               }
            }
        }
        cout<<ct<<endl;
        
    }
    
    return 0;
}