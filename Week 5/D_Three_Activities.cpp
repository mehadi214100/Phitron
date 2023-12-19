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
        int arr1[n],arr2[n],arr3[n];
        vector<pair<int,int>>v1;
        vector<pair<int,int>>v2;
        vector<pair<int,int>>v3;
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
            v1.push_back({arr1[i],i});
        }
       
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
            v2.push_back({arr2[i],i});
        }
        for (int i = 0; i < n; i++)
        {
            cin>>arr3[i];
            v3.push_back({arr3[i],i});
        }
        sort(v1.begin(),v1.end(),greater<pair<int,int>>());
        sort(v2.begin(),v2.end(),greater<pair<int,int>>());
        sort(v3.begin(),v3.end(),greater<pair<int,int>>());

        vector<pair<int,pair<int,int>>>ans;
        for (int i = 0; i < 3; i++)
        {
            ans.push_back({v1[i].first,{3,v1[i].second}});
            ans.push_back({v2[i].first,{2,v2[i].second}});
            ans.push_back({v3[i].first,{1,v3[i].second}});
        }
        sort(ans.begin(),ans.end(),greater<pair<int,pair<int,int>>>());
        
        vector<int>box;
        vector<int>pos;
        
        int res = 0;
        for (int i = 0; i < 9; i++)
        {
            cout<<"Data item "<<ans[i].first<<sp<<ans[i].second.first<<sp<<ans[i].second.second<<endl;
            int boxnumber = ans[i].second.first;
            int inxnumber = ans[i].second.second;
            int boxpresent = false,positionpres= false;
            for (int i = 0; i < box.size(); i++)
            {
                if(box[i]==boxnumber){
                    boxpresent = true;
                    break;
                }
            }
            for (int i = 0; i < pos.size(); i++)
            {
                if(pos[i]==inxnumber){
                    positionpres = true;
                    break;
                }
            }
            if(boxpresent==false){
                if(positionpres==false){
                    // cout<<ans[i].first<<sp<<ans[i].second.first<<sp<<ans[i].second.second<<endl;
                    res += ans[i].first;
                    box.push_back(ans[i].second.first);
                    pos.push_back(ans[i].second.second);
                }
            
               
            }
            
        }
        cout<<res<<endl;
            
    }
    
    return 0;
}