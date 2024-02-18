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
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int year = arr[0];
        for (int i = 1; i < n; i++)
        {
            if(year>=arr[i]){
                int ct = (year/arr[i])+1;
                year = ct*arr[i];
            }else{
                year = arr[i];
            }
        }
        cout<<year<<endl;
        
    }
    
    return 0;
}