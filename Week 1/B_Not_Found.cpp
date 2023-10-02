#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    map<char,int>m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]] = 1;
    }
    string ans= "None";
     for (char i = 'a'; i <= 'z'; i++)
    {
        if(m[i]==0) {
            ans = i;
            break;
        }
    }
    cout<<ans;
    
    
    
    return 0;
}


