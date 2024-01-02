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
    // cin>>t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>arr2[i];
        }
        int arr[n+m];
        int i = 0,j=0;
        int curr = 0;
        while (i<n  && j<m)
        {
            if(arr1[i]<=arr2[j]){
                arr[curr] = arr1[i];
                i++;
            }else{
                arr[curr] = arr2[j];
                j++;
            }
            curr++;
        }
        while (i<n)
        {
            arr[curr] = arr1[i];
            i++;
            curr++;
        }
        while (j<m)
        {
            arr[curr] = arr2[j];
            j++;
            curr++;
        }
        for (int i = 0; i < n+m; i++)
        {
            cout<<arr[i]<<sp;
        }
        
        
    }
    
    return 0;
}