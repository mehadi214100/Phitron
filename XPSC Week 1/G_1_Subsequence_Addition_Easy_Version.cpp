#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int mx = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];  
        }
        sort(arr,arr+n);
        int sum = arr[0];
        bool check = true;
        if(sum>1) {
                check = false;
        }
        for (int i = 1; i < n; i++)
        {
            if(arr[i]>sum) {
                check = false;
                break;
            }
            sum+= arr[i];
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

        

        
        
    }
  
    return 0;
}
    