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
        int n;cin>>n;
        int res;
        if(n<=50){
            if(n%2==0){
               res = (50-n)/2;
            }else{
                res = ((50-(n-1))/2)+2;
            }
            
        }else{
            if((n-50)%3==0){
                res = (n-50)/3;
            }else if((n-50)%3==1){
                res = ((n-51)/3)+2;
            }else{
                res = ((n-52)/3)+4;
            }
        }
        cout<<res<<endl;
    }
    
    return 0;
}


