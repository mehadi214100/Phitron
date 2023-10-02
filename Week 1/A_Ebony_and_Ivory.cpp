#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int op1 = c-a;
    int op2 = c-b;
    if(a>c && b>c) {cout<<"No"; return 0;}
    if(op1%b==0 || op2%a==0 || c%a==0 || c%b==0){
        cout<<"Yes";
        return 0;
    }else{
    bool check = false;
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
             int res = (a*i + b*j);
             if(res==c){
                check = true;
                cout<<"Yes";
                return 0;
             }
        }
        
    }
    if(check==false) cout<<"No";
    }
    return 0;
}