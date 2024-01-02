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
        int n,m;cin>>n>>m;
        char s[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>s[i][j];
            }
            
        }
        
        int ct = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(ct==0){
                    if(s[j][i]=='v'){
                        ct++;
                        break;
                    }
                }
                if(ct==1){
                    if(s[j][i]=='i'){
                        ct++;
                        break;
                    }
                }
                if(ct==2){
                    if(s[j][i]=='k'){
                        ct++;
                        break;
                    }
                }

                if(ct==3){
                    if(s[j][i]=='a'){
                        ct++;
                        break;
                    }
                }
                if(ct==4){
                    break;
                }
            }
            
        }
        if(ct==4){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
      

    }
    
    return 0;
}