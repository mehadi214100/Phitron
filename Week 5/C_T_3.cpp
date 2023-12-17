#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

bool isvalid(int mid,int arr[],int n,int c){
    int ct = 1;
    int last = 0;
    for (int i = 1; i < n; i++)
    {
        if(abs(arr[i]-arr[last])>=mid){
            ct++;
            last = i;
        }
    }
    return ct>=c;
    
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n,c;
        cin>>n>>c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int left = 0,right = INT_MAX;
        int ans;
        while (left<=right)
        {
            int mid = left+(right-left)/2;
            if(isvalid(mid,arr,n,c)){
                ans = mid;
                left = mid+1;
            }else{
                right = mid-1;
            }


        }
        cout<<ans<<endl;
        
           
    }
    
    return 0;
}