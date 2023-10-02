#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int sz = s.length();
    if(sz==4){
        cout<<s;
    }else if(sz==3){
        cout<<0<<s;
    }else if(sz==2){
        cout<<"00"<<s;
    }else{
        cout<<"000"<<s;
    }
       
    return 0;
}


