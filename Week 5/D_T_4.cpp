#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

bool isvalid(int arr[],int n,int size,int m){
    int ct = 1;
    int current = size;
    for (int i = 0; i < n; i++)
    {
        if(current>=arr[i]){
            current -= arr[i]; 
        }else if(arr[i]>size){
            return false;
        }
        else{
            ct++;
            current = size;
            current -= arr[i]; 
        }
    }
    return ct<=m;
    
}

int main() {
    int n,m;
    while (cin>>n>>m)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int l = 0,r = INT_MAX,ans;
        while (l<=r)
        {
            int mid = l+(r-l)/2;
            if(isvalid(arr,n,mid,m)){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout<<ans<<endl;


        
    }
    
    return 0;
}