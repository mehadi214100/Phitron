#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--){
    int n;cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans[n];
    for(int i=0;i<n;i++){
       ans[i]=-1;
    }
    for(int i=0;i<n-1;i++){
       if(arr[i]!=arr[i+1]){
           int j = i;
           while(j>=0){
               if(ans[j]<0){
                   ans[j]=i+1;
               }else{
                   break;
               }
               j--;
           }
       }
    }
    
    int q;cin >> q;
    while(q--){
        int l,r;
        cin >> l>>r;
        l--;
        r--;
        int pos = ans[l];
        if(pos==-1){
            cout << -1<<" "<<-1 << endl;
        }else if(pos<=r){
            cout<<l+1 << " "<<pos+1 << endl;
        }else{
            cout << -1<<" "<<-1 << endl;
        }
    }
    }
    return 0;
}