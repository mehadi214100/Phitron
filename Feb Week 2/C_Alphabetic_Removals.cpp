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
    // cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;cin>>s;
        map<char,int>m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        for(auto d:m){
            if(k>0){
                if(k>=d.second){
                    k -= d.second;
                    d.second = 0;
                    m[d.first] = 0;
                    
                }else{
                    d.second -= k;
                    k = 0;
                    m[d.first] = d.second;
                    // cout<<d.first<<sp<<d.second<<endl;
                }
            }else{
                break;
            }
        }
        string res = "";
       for (int i = n-1; i >=0; i--)
       {
            if(m[s[i]]!=0){
                // cout<<s[i]<<sp<<m[s[i]];
                res += s[i];
                m[s[i]]--;
                // cout<<" "<<m[s[i]]<<endl;
            }
       }
       reverse(res.begin(),res.end());
       cout<<res;
    // for(auto d:m){
    //     cout<<d.first<<sp<<d.second<<endl;
    // }
       
        
    }
    
    return 0;
}