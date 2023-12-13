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
        int frutetype[n];
        int nutron[n];
        for (int i = 0; i < n; i++)
        {
            cin>>frutetype[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>nutron[i];
        }
        vector<pair<int,int>>v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({frutetype[i],nutron[i]});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        int sum = 0;
        int current = v[0].first;
        if(v[0].second>=0){
            sum += v[0].second;
        }
        for (int i = 1; i < n; i++)
        {
            if(current==v[i].first){
                continue;
            }else{
                if(v[i].second>=0){
                    sum+= v[i].second;
                    current = v[i].first;
                }
            }
        }
        cout<<sum<<endl;
        
        
        
    }
    
    return 0;
}