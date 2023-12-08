#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,l,r,k;
        cin >> n>>l>>r>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr,arr+n);
        int i = 0;
        for(i;i<n;i++){
            if(arr[i]>=l)break;
        }
       // cout << "i " <<i<< endl;
        int ans=0;
        while(k>0 && i<n){
            if(arr[i]<=r && arr[i]<=k){
                ans++;
                k-= arr[i];
                i++;
            }else{
                break;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}