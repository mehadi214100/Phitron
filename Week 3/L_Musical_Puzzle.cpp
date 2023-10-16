#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        map<string,int>m;
        for (int i = 0; i < n-1; i++)
        {
            char word1 = s[i];
            char word2 = s[i+1];
            string ss = "";
            ss+=word1;
            ss+=word2;
            if(m[ss]==0){
                m[ss]++;
            }else{

            }
            
        }
         std::map<std::string, int>::iterator it = m.begin();
        int count = 0;
        while (it != m.end())
        {
            count++;
            it++;
        }
        
        cout<<count<<endl;
        
    }
    
    return 0;
}