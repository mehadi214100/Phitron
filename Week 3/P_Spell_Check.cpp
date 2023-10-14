#include<bits/stdc++.h>
using namespace std;
map <char,int>m;
int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        m['T']=1;
        m['i']=1;
        m['m']=1;
        m['u']=1;
        m['r']=1;
        bool check = true;
        int n;
        cin>>n;
        string name;
        cin>>name;
        for (int i = 0; i < n; i++)
        {
            if(m[name[i]]==1 && n==5){
                check = true;
            }else{
                check = false;
                break;
            }
            m[name[i]]++;
        }
        if(check){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        m['T']=0;
        m['i']=0;
        m['m']=0;
        m['u']=0;
        m['r']=0;
        
    }
    
    
    return 0;
}