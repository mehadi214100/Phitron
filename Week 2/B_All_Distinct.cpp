#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        set<int>s;
        for (int i = 0; i < n; i++){
            cin>>arr[i];
            s.insert(arr[i]);
        };
        int x = s.size();
        if(x%2 == n%2){
            cout<<x<<endl;
        }else{
            cout<<x-1<<endl;
        }
        
        
    }
    
    return 0;
}