#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)cin>>arr[i]; 
        int current = arr[0];
        int count = 1;
        vector<int>v;
        for (int i = 1; i < n; i++)
        {   
            v.push_back(count);
            if(arr[i]==current){
                count++;
            }else{
                count=1;
            }
            current = arr[i];
        }
        v.push_back(count);
        int op = *max_element(v.begin(), v.end());
        cout<<op<<endl;
    }
    
    return 0;
}