#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    int count = 1;
    for (int i = 97; i <= 122; i++)
    {
        for (int j = 97; j <= 122; j++)
        {
            if(i!=j){
                char a = i;
                char b = j;
                string s = "";
                s+=a;
                s+=b;
                m[s] = count;
                count++;
            
            }
        }
        
    }
    int t;
    cin>>t;
    while (t--)
    {
       string ip ;
       cin>>ip;
       cout<<m[ip]<<endl;
    }
    
   
    
    return 0;
}