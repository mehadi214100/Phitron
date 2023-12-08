#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        int ct = 1;
        bool flag = true;
        
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                ct++;
            }
            if(i!=0){
                if(arr[i] && arr[i-1]){
                    ct+=4;
                }else if(arr[i]==0&& arr[i-1]==0){
                    cout << -1 << endl;
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << ct << endl;
        
    }
    
    return 0;
}