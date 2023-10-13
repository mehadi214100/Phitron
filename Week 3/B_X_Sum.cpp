#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;


int n,m;

bool isvalid(int i,int j){
    return (i>=0 && i<n && j>=0 && j<m);
}

int main() {
    int t;cin>>t;
    while (t--)
    {
        cin>>n>>m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
    
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = 0;
                int x = i,y=j;
                while (isvalid(x,y))
                {
                    sum += arr[x][y];
                    x--;
                    y--;
                }
                
                x = i+1,y=j+1;
                while (isvalid(x,y))
                {
                    sum += arr[x][y];
                    x++;
                    y++;
                }


                x = i-1,y=j+1;
                while (isvalid(x,y))
                {
                    sum += arr[x][y];
                    x--;
                    y++;
                }

                x = i+1,y=j-1;
                while (isvalid(x,y))
                {
                    sum += arr[x][y];
                    x++;
                    y--;
                }

                res = max(res,sum);

            }
            
        }
        cout<<res<<endl;
        

    }
    
    return 0;
}