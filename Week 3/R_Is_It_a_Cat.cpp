#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s,op = "",result = "meow";
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    
    char currnet = s[0];
    op+= currnet;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=currnet){
            op+=s[i];
            currnet = s[i];
        }
    }
    if(op==result){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}