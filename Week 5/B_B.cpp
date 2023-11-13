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
        int n,m;cin>>n>>m;
        string s;
        cin>>s;
        string subs;
        cin>>subs;
        int i = 0,j=0;
        string sub;
        deque<char>q;
        int op = INT_MAX;
        while (j<n+1)
        {
           if(j<m){
            q.push_back(s[j]);
           }else{
            string res = "";
            for(auto v:q){
                res += v;
            }
            q.pop_front();
            q.push_back(s[j]);
            int cost = 0;
            for (int i = 0; i < m; i++)
            {
                char c1 = res[i];
                char c2 = subs[i];
                int cos1,cos2;
                if(c1>=c2){
                    cos1 = c1-c2;
                    cos2 = ('9'-c1)+ (c2-'0')+1;
                }else{
                    cos1 = c2-c1;
                    cos2 = ('9'-c2)+ (c1-'0')+1;
                }

                int mn = min(cos1,cos2);
                cost += mn;
            }
            op  = min(cost,op);
           
           }
           j++;
        }
        cout<<op<<endl;

        
    }
    
    return 0;
}


