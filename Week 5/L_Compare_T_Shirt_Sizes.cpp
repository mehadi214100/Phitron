#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if((s1[s1.length()-1]=='S') && (s2[s2.length()-1]=='S')){
            if(s1.length()>s2.length()){
                cout<<"<"<<endl;
            }else if(s1.length()<s2.length()){
                cout<<">"<<endl;
            }else{
                cout<<"="<<endl;
            }
        }else if((s1[s1.length()-1]=='L') && (s2[s2.length()-1]=='L')){
            if(s1.length()>s2.length()){
                cout<<">"<<endl;
            }else if(s1.length()<s2.length()){
                cout<<"<"<<endl;
            }else{
                cout<<"="<<endl;
            }
        }else if(s1[s1.length()-1]=='S'){
            if((s2[0]=='M')|| (s2[s2.length()-1]=='L')){
                cout<<'<'<<endl;
            }
        }else if(s2[s2.length()-1]=='S'){
            if((s1[0]=='M')|| (s1[s1.length()-1]=='L')){
                cout<<'>'<<endl;
            }
        }else if(s1[s1.length()-1]=='L'){
            if((s2[0]=='M')|| (s2[s2.length()-1]=='S')){
                cout<<'>'<<endl;
            }
        }else if(s2[s2.length()-1]=='L'){
            if((s1[0]=='M')|| (s1[s1.length()-1]=='S')){
                cout<<'<'<<endl;
            }
        }else{
            cout<<"="<<endl;
        }

    }
    return 0;
}