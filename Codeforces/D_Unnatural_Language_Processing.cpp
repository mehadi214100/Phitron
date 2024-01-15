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
        string s;
        cin>>s;
        vector<char>v;
        int i = n-1;
        for (i; i >=2; i--)
        {
            if(s[i]=='a' || s[i]=='e'){
                
                v.push_back(s[i-1]);
                v.push_back(s[i]);
                v.push_back('.');
                i--;
            }else{
                v.push_back(s[i-2]);
                v.push_back(s[i-1]);
                v.push_back(s[i]);
                v.push_back('.');
                i-=2;
            }
        }
        if(i!=-1){
            v.push_back(s[i-1]);
            v.push_back(s[i]);
        }
        vector<string>res;
        string curr = "";
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i]!='.'){
                curr += v[i];
            }else{
                res.push_back(curr);
                curr = "";
            }
        }
        res.push_back(curr);
        reverse(res.begin(),res.end());
        i = 0;
        for (; i < res.size()-1; i++)
        {
            if(res[i].size()>1){
                cout<<res[i]<<'.';
            }
        }
        cout<<res[i];
        

        cout<<endl;
    }
    
    return 0;
}