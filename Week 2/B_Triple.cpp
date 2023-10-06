#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        map<int, int>::iterator it = m.begin();
        
        bool check = true;
        while (it != m.end())
        {
            if(it->second>=3){
                cout<<it->first<<endl;
                check=false;
                break;
            }
            ++it;
        }
        if(check)cout<<-1<<endl;
                
        
    }
    
    return 0;
}