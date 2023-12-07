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
        int n;cin >> n;
        int num = n*n;
        
        for(int i= 1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout << num << " ";
                num -= 2;
                if(num<=0){
                    num = n*n -1;
                }
            }
            cout  << endl;
        }
        cout  << endl;
        
        



    }

    return 0;
}