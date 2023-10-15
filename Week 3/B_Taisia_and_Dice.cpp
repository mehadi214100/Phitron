#include<bits/stdc++.h>
using namespace std;



int main(){
    int test;
    cin>>test;
    while (test--)
    {   
        int n,s,r;
        cin>>n>>s>>r;
        int arr[n];
        arr[0] = s-r;
        
        for (int i = 1; i < n; i++)
        {
            arr[i] = 0;
        }
        int remain = r;
        int i = 1;
        while (remain--)
        {
            arr[i]++;
            i++;
            if(i>n-1){
                i = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    
    

    return 0;
}