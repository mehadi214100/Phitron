#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;
int res(int n){
    int ans = 0;
    while (n>0)
    {
        ans +=n%10;
        n/=10;
    }
    return ans;   
}
int main() {
    vector<int>v;
    v.push_back(0);
    for (int i = 1; i < 200010; i++)
    {
        if(i<10){
           v.push_back(v[i-1]+i);
        }else{
            v.push_back(v[i-1]+res(i));
        }
       
    }
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        cout<<v[n]<<endl;
    }
 
    
    
    
    
    return 0;
}