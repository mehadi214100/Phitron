#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

bool search(vector<string>arr,string s){
    for (int i = 0; i < arr.size(); i++)
    {
        if(s==arr[i]) return true;
    }
    return false;
    
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int ct = 0;
        int k = 1;
        vector<string>v;
        
        int sz = 0;
        for (int i = 0; i < n; i++)
        {
            if(i==0){
                if(s[i]=='0'){
                     v.push_back("NO");
                     cout<<"NO"<<endl;
                }
                else {
                    v.push_back("IDK");
                    cout<<"IDK"<<endl;
                }
                sz++;
            }else{
                if(s[i]=='1'){
                    if(search(v,"NO")) {
                        v.push_back("NO");
                        cout<<"NO"<<endl;
                    }
                    else {
                       v.push_back("IDK");
                        cout<<"IDK"<<endl;
                    }
                    sz++;
                }else{
                    if(search(v,"YES")) {
                        v.push_back("IDK");
                        cout<<"NO"<<endl;
                    }
                    else {
                        v.push_back("YES");
                        cout<<"YES"<<endl;
                    }
                    sz++;
                }
            }
        }
        
        
        
    }
    
    return 0;
}