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
        int n;cin>>n;int arr[n];
        fl(i,n) cin>>arr[i];
        for (int i = 0; i < n; i++)
        {
            int num = arr[i];
            int b;cin>>b;
            string s;cin>>s;
            for (int j = 0; j < b; j++)
            {
                char c = s[j];
                if(c=='U'){
                    // down
                    num-=1;
                    if(num==-1){
                        num = 9;
                    }
                }else{
                    num+=1;
                    if(num==10){
                        num = 0;
                    }
                }
            }
            cout<<num<<" ";
            
            
        }
        cout<<endl;
        
    }
    

    return 0;
}


