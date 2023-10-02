#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    /*
    Input :
    6
    5 2 1 6 3 4
    3
    output = 13

    sum of subarray  with k size 
    int n;cin>>n;int arr[n];
    fl(i,n) cin>>arr[i];
    int k;cin>>k;
    int sum = 0;
    int res = INT_MIN;
    int i = 0,j = 0;
    while(j<n){
        sum+= arr[j];
        if(j>=k-1){
            res = max(res,sum);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    cout<<res;
   */

    // Print first negative from each subset of size K 

    int n;cin>>n;int arr[n];
    fl(i,n) cin>>arr[i];
    int k;cin>>k;
    int i = 0, j = 0;
    queue<int>q;
    while (j<n)
    {
        if(arr[j]<0) q.push(arr[j]);
        if(j>=k-1){ 
            if(!q.empty()){
                cout<<q.front()<<" ";
                
            }else {
                cout<<0<<" ";
            }
            if(arr[i]<0) q.pop();
            i++;
        }
        j++;
    }
    




    return 0;
}


