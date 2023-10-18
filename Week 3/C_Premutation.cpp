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
        int arr[n][n-1];
        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < n-1; j++)
           {
                cin>>arr[i][j];
           }
           
        }
        vector<int>v;
        for (int j = 0; j < n-1; j++)
        {
            int element1ct = 0;
            int element2ct = 0;
            int el1 = arr[0][j];
            int el2 ;
            for (int i = 0; i < n; i++)
            {
                if(arr[i][j]==el1){
                    element1ct++;
                }else{
                    el2 = arr[i][j];
                    element2ct++;
                }
            }
            if(element1ct>element2ct){
                v.push_back(el1);
                v.push_back(el2);
            }else{
                v.push_back(el2);
                v.push_back(el1);
            }
        }
        map<int,int>mp;
        for(int d:v){
            if(mp[d]==0){
                cout<<d<<sp;
            }
            mp[d]++;
        }
        cout<<endl;

    }
    
    return 0;
}


