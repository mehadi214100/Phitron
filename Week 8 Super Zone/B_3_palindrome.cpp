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
    // cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n==1) cout<<'a';
        else if(n==2) cout<<"ab";
        else if(n==3) cout<<"abb"<<endl;
        else{
            string s = "abb";
            int a = 0;
            
            for (int i = 3; i < n; i++)
            {
                if(a<2){
                    s += 'a';
                    a++;
                    if(a==2)a++;
                }else{
                    s+='b';
                    a--;
                    if(a==1) a= 0;
                }
                
                
            }
            cout<<s;

             
        }
    }
    
    return 0;
}