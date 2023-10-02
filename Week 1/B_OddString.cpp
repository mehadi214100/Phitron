#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if(i%2==0) res += s[i];
    }
    cout<<res;
    return 0;
}


