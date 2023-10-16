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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        map<char,int>m;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            m[c]++;
        }
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            char cc;
            if(islower(c)){
                cc = c-32;
            }else{
                cc = c+32;
            }
            int c1 = m[c];
            int c2 = m[cc];
            if(c1>0 && c2>0){
                int mn = min(c1,c2);
                ct += mn;
                m[c]-= mn;
                m[cc]-= mn;
            }
        }
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            int last = m[c];
            int make = last/2;
            if(make>=k){
                ct += k;
                break;
            }else{
                if(make>0){
                    ct += make;
                    k -= make;
                    m[c] = 0; 
                }
            }

            
        }


      
        cout<<ct<<endl;
        
    }
    
    return 0;
}


