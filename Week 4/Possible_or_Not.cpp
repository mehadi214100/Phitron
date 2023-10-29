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
        int n,b;
        cin>>n>>b;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            if((x&b)==b){
                v.push_back(x);
            }
        }
        if(v.size()==0) cout<<"NO"<<endl;
        else{
            int res = v[0];
            for (int i = 1; i < v.size(); i++)
            {
                res &=v[i];
                // cout<<v[i]<<sp;
            }
            
            if(res==b) cout<<"YES"<<endl;
            else sn;
        }
        
        
    }
    
    return 0;
}


