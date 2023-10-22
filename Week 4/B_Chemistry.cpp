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
        int n,k; cin>>n>>k;
        string s; cin>>s;
        map<char,int>mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int pair = 0;
        int total = 0;
        int odd = 0;
        for(auto p:mp){
            if(p.second%2==0){
                pair += p.second/2;
            }else{
                odd += p.second%2;
            }
            
        }
        if(k==odd || abs(k-odd)==1) sy;
        else{
            if(odd-k >1 ) sn;
            else sy;
        }
        

    }
    
    return 0;
}


