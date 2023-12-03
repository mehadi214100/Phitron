#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        int arr[n];
        for(int i= 0; i<n; i++) {
            cin>>arr[i];
        }
        int count = 0;
        for(int i= 0; i<n; i++) {
           int diff = abs(arr[i]-H);
           if(diff%k==0){
           	int step = diff/k;
               if(step>0 && step<m){
               count++;
               }
           }
        }
        cout<<count<<endl;
    }
}
    