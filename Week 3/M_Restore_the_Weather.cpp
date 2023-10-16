#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.push_back({x,i});
        }
        vector<pair<int,int>>b;
        
        for (int i = 0; i < n; i++)
        {
            int y;
            cin>>y;
            b.push_back({y,i});
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        vector<pair<int,pair<int,int>>>vv;

        for (int i = 0; i < n; i++)
        {
           vv.push_back({a[i].second,{a[i].first,b[i].first}});
        }
        sort(vv.begin(),vv.end());
        for (int i = 0; i < n; i++)
        {
           cout<<vv[i].second.second<<" ";
        }

        printf("\n");


    }
    
    return 0;
}