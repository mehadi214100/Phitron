#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int distance(int x1,int y1,int x2,int y2){

    double distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    int ans = distance*distance;
    return ans;
}


int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        vector<pair<int,int>>v;
        v.push_back({x1,y1});
        v.push_back({x2,y2});
        v.push_back({x3,y3});
        v.push_back({x4,y4});
        sort(v.begin(),v.end());

      int res =   distance(v[0].first,v[0].second,v[1].first,v[1].second);
      cout<<res<<endl;


    }
    
    return 0;
}