#include <bits/stdc++.h>
// mehadi 
#define sp " "
using namespace std;

void solve(){
        int n;cin>>n;
        int arr[n*2];
        for (int i = 0; i < (2*n); i++) cin>>arr[i];
        vector<pair<int,int>>v;
        sort(arr,arr+(2*n));
        int k = 0;
        int cnt = 0;
        for (int i = (2*n)-1,j=n-1; i >= n; i--,j--)
        {
            
            v.push_back({arr[i],arr[j]});
            if(k!=0){
                int diff = abs(arr[i]-v[k-1].first) + abs(arr[j]-v[k-1].second);
                cnt+= diff;

            }
            k++;
        }
        cout<<cnt<<endl;
        for(auto d:v){
            cout<<d.first<<sp<<d.second<<endl;
        }


}

int main() {
    int test;
    cin>>test;
    while (test--)
    {
        solve();
    }
    
    return 0;
}


