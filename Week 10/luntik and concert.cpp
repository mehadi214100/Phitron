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
        ll a,b,c;
        cin >> a>>b>>c;
        int one = a*1;
        int two = b*2;
        int three = c*3;
        if(two>three){
            int diff = two- three;
            if(diff%2==0){
                cout << one%2 << endl;
            }else{
                one += 1;
               cout << one%2 << endl;
            }
        }else if(three>two){
            int diff =three- two;
            if(diff%2==0){
                if(one==2) cout << 0 << endl;
                else if(one<2) cout << 2-1<< endl;
                else {
                    one-= 2;
                    cout << one%2 << endl;
                }
            }else{
                if(one==1) cout << 0 << endl;
                else if(one<1) cout << 1<< endl;
                else {
                    one-= 1;
                    cout << one%2 << endl;
                }
            }
        }else cout << one%2 << endl;
        
    }

    return 0;
}