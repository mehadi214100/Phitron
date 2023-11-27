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
        int first,second= INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(i==0){
                first = x;
            }
            else{
                if(x>first){
                    second = first;
                    first = x;
                }else if(x>second && x<first){
                    second = x;
                }
            }
        }
        cout<<first+second<<endl;
        
    }
    
    return 0;
}


