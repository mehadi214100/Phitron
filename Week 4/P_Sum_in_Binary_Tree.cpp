#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int x;
        cin>>x;
        long long int sum = x;
        while (x>0)
        {
            sum+= x/2;
            x/=2;
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}