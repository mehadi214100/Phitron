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
        char arr[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        int row,col;
        for (int i = 0; i < 3  ; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if(arr[i][j]=='?'){
                    row = i,col = j;
                    break;
                }
            }
            
        }
        bool a = false;
        bool b = false;
        bool c = false;
        for (int i = 0; i < 3; i++)
        {
            if(arr[row][i]=='A') a = true;
            else if(arr[row][i]=='B') b = true;
            else if(arr[row][i]=='C') c = true;
        }
        if(a==false) cout<<'A'<<endl;
        else if(b==false) cout<<'B'<<endl;
        else cout<<'C'<<endl;
        

    }
    
    return 0;
}