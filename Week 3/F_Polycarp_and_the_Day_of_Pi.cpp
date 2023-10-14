#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "314159265358979323846264338327";
    int t;
    cin>>t;
    while (t--)
    {
        string value;
        cin>>value;
        int count = 0;
        for (int i = 0; i < value.length(); i++)
        {
            if(s[i]==value[i]){
                count++;
            }else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}