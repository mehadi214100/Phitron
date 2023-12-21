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
        string s;cin>>s;
        int pos1 = s[0];
        int pos2 = s[s.length()-1];
        deque<pair<int,int>>v;
        if(pos1<=pos2){
            for (int i = 1; i < s.length()-1; i++)
            {
                if(s[i]>=pos1 && s[i]<=pos2){
                    int nm = s[i];
                    v.push_back({nm,i+1});
                }
            }
            sort(v.begin(),v.end());
            v.push_front({pos1,1});
            v.push_back({pos2,s.length()});


            cout<<(abs(pos1-pos2))<<sp<<v.size()<<endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout<<v[i].second<<sp;
            }
            cout<<endl;

        }else{
            for (int i = 1; i < s.length()-1; i++)
            {
                if(s[i]<=pos1 && s[i]>=pos2){
                    int nm = s[i];
                    v.push_back({nm,i+1});
                }
            }
            sort(v.begin(),v.end(),greater<pair<int,int>>());
            v.push_front({pos1,1});
            v.push_back({pos2,s.length()});
            

            cout<<(abs(pos1-pos2))<<sp<<v.size()<<endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout<<v[i].second<<sp;
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}