#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)cin>>arr[i]; 
        sort(arr,arr+n);
        int i = 0;
        int j = n-1;
        int sum = 0;
        while (i<=j)
        {
            int r = arr[j]-arr[i];
            sum+=r;
            i++;
            j--;
        }
        cout<<sum<<endl;
    }
    return 0;
}