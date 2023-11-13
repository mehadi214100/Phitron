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
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int mxA = max(a1,max(a2,a3));
        int mnA = min(a1,min(a2,a3));
        int midA = (a1+a2+a3)-(mxA+mnA);

        int mxb = max(b1,max(b2,b3));
        int mnb = min(b1,min(b2,b3));
        int midb = (b1+b2+b3)-(mxb+mnb);
        
        int num1 = (((mxA*10)+midA)*10)+mnA;
        int num2 = (((mxb*10)+midb)*10)+mnb;
        if(num1==num2) cout<<"Tie"<<endl;
        else if(num1>num2) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;

    }
    
    return 0;
}


