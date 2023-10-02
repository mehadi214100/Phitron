#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
       int n;cin>>n;
       map<string,int>m1,m2,m3;
       set<string>ss;
       for (int i = 0; i < n; i++)
       {
          string s;cin>>s;
          ss.insert(s);
          m1[s] = 1;
       }
       for (int i = 0; i < n; i++)
       {
          string s;cin>>s;
          ss.insert(s);
          m2[s] = 1;
       }
       for (int i = 0; i < n; i++)
       {
          string s;cin>>s;
          ss.insert(s);
          m3[s] = 1;
       }
       int ans1 = 0,ans2 = 0,ans3=0;
       for (auto d:ss){
            if(m1[d]==1 && m2[d]==1 && m3[d]==1) continue;
            else if(m1[d]==1&& m2[d]==1 && m3[d]==0){
                ans1++;
                ans2++;
            }
            else if(m1[d]==0&& m2[d]==1 && m3[d]==1){
                ans3++;
                ans2++;
            }else if(m1[d]==1&& m2[d]==0 && m3[d]==1){
                ans1++;
                ans3++;
            }else if(m1[d]==1&& m2[d]==0 && m3[d]==0){
                ans1+=3;
                
            }else if(m1[d]==0&& m2[d]==1 && m3[d]==0){
                ans2+=3;
            }else if(m1[d]==0&& m2[d]==0 && m3[d]==1){
                ans3+=3;
            }
       }
       cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
       
    }
    
    return 0;
}


