#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
        string s;
        cin>>s;
        int day = 0;
        int count = 0;
        string word = "";
        for (int i = 0; i < s.length(); i++)
        {
            if(word.find(s[i])==-1){
                word += s[i];
                count++;
            }
            if(count>3){
                //cout<<endl;
                count = 0;
                word = "";
                word+=s[i];
                count++;
                day++;
            }
            //cout<<count<<" "<<s[i]<<" "<<word<<endl;
        }
        day++;
        cout<<day<<endl;
    }
    return 0;
}