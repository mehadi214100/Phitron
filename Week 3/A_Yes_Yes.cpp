// YesYesYesYesYesYes
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
    string mystr = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    while (t--)
    {
        string s;
        cin>>s;
        if(mystr.find(s)!=-1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}


