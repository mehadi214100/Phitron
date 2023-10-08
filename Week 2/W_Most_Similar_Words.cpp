#include<bits/stdc++.h>
using namespace std;

int main(){
    int z;
    cin>>z;
    while(z--){
    int n,l;
    cin>>n>>l;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j){
                int sum = 0;
                string s1 = s[i];
                string s2 = s[j];
                for (int k = 0; k < l; k++)
                {
                    sum += abs(s1[k]-s2[k]);
                }
                v.push_back(sum);
                
            }    
        }
        
    }
    cout<<*min_element(v.begin(),v.end())<<endl;
    }
    
    return 0;
}