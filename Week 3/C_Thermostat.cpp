#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
       int l,r,x;cin>>l>>r>>x;
       int a,b;cin>>a>>b;

       if(a==b){
            cout<<0<<endl;
       }else if(abs(b-a)>=x){
            cout<<1<<endl;
       }else if(abs(a-x)>=abs(b-x)){
            cout<<2<<endl;
       }else{
            cout<<-1<<endl;
       }

    }
    
    return 0;
}


