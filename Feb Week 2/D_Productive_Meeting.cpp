#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<pair<int,int>>v;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            v.push_back({x,i+1});
        }
        sort(v.begin(),v.end());
        
        int i=0,j=n-1,ct=0;
        map<pair<int,int>,int>m;
        
        while (i<n-1)
        {
            if(v[i].first==0){
                i++;
            }else{
  
                int left = v[i].first;
                int right = v[j].first-v[j-1].first+1;
                int count  = 0;
                if(right<left){
                    v[i].first-= right;
                    v[j].first -= right;
                    m[{v[i].second,v[j].second}]+=right;
                    ct+=right;

                    if(v[j].first<v[j-1].first){
                        j--;
                    }else{
                        j=n-1;
                    }
                }else if(right>left){
                    v[j].first -= v[i].first;
                    m[{v[i].second,v[j].second}]+=v[i].first;
                    ct+=v[i].first;
                    i++;
                    if(v[j].first<v[j-1].first){
                        j--;
                    }else{
                        j=n-1;
                    }
                }else{
                    
                    v[j].first -= v[i].first;
                    m[{v[i].second,v[j].second}]+=v[i].first;
                    ct+=v[i].first;
                    i++;
                    if(v[j].first<v[j-1].first){
                        j--;
                    }else{
                        j=n-1;
                    }
                }
                
            }
        }
        cout<<ct<<endl;
        for(auto d:m){
            while (d.second--)
            {
                cout<<d.first.first<<" "<<d.first.second<<endl;
            }
            
        }
        
        
    }
    
    return 0;
}