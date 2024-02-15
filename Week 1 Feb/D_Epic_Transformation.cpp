#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        stack<int>s;
        int i =0,j=n-1;
        while (i<j)
        {
           if(arr[i]!=arr[j]){
                i++;
                j--;
           }else{
                break;
           }
        }
        int res = j-i+1;
        cout<<res<<endl;
        
    }
    
    return 0;
}