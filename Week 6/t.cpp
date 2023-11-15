#include<bits/stdc++.h> 
using namespace std; 

 
int res(int x,int n) 
{ 
    int sum=0; 
    for(int i=2;i<=n;i+=2) 
    { 
        int t = ceil(pow(x,i)); 
        cout<<x<<" "<<i<<" "<<t<<endl; 
        sum+=t; 
    } 
    return sum; 
    // return pow(x,n); 
} 
 
void solve() 
{ 
    int x,p; 
    cin>>x>>p; 
    int op = res(x,p); 
    cout<<op<<endl; 
} 
int main() 
{ 
   
    int t=1,c=1; 

    while(t--) 
    { 

        solve(); 
    } 
    return 0; 
}