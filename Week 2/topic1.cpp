#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i = 0,j=0,sum=0,mx=0;
    while(j<a.size()){
        sum+=a[j];
        
        if(sum>k){
            while(sum>k){
                cout<<sum<<" ";
                sum-=a[i];
                i++;
            }
        }
        if(sum==k){
            mx = max(mx,j-i+1);
        }

        j++;
    }
    return  mx;
}

int main() {
    int n,k;cin>>n>>k;
    vector<int>a;
    fl(i,n) {
        int x;cin>>x;
        a.push_back(x);
    }
    cout<<longestSubarrayWithSumK(a,k);
    return 0;
}


