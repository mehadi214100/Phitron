#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        vector<int>v;
        int ct= 0;
        while (n--)
        {
            int m,ln;
            cin>>m>>ln;
            if(ln==l){
                v.push_back(m);
                ct++;
            }
        }
        if(ct>=k){
            int res = 0;
            sort(v.begin(),v.end(),greater<int>());
            for (int i = 0; i < k; i++)
            {
                res += v[i];
            }
            cout<<res<<endl;
            

        }else{
            cout<<-1<<endl;
        }
        
    }
    
    return 0;
}


