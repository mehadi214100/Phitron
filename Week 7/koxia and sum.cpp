#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
    
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr2[m];
    long long sum1 = 0;


    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum1+=arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    sort(arr,arr+n); 
        for (int i = 0; i < m; i++)
        {
            sum1 -= arr[0];
            sum1 += arr2[i];
            arr[0] = arr2[i];
           // cout<<arr[0]<<endl;
            sort(arr,arr+n);
            //cout<<arr[0]<<endl;
            //cout<<sum1<<endl;

        }

     cout<<sum1<<endl;
    
    }
    return 0;
}