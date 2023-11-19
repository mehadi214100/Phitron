#include<bits/stdc++.h>
using namespace std;

void op(int arr[],int n){
    for (int i = 1; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        int sum  = 0;
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
            sum+=arr[i];
        }
        int remain = sum%n;
        if(remain==0){
            op(arr,n);
        }else{
            arr[remain] += remain; 
            op(arr,n);
        }
        cout<<"\n";
        
        
    }
    
    return 0;
}