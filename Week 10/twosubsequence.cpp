#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        string s;cin >> s;
        char mn = 'z';
        for(int i=0;i<s.length();i++){
            mn = min(s[i],mn);
        }
        cout << mn << ' ';
        int ct= count(s.begin(),s.end(),mn)-1;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==mn){
                if(ct>0){
                    cout << s[i];
                }
                ct--;
            }else{
                cout << s[i];
            }
        }
        cout  << endl;
    }
    
    return 0;
}