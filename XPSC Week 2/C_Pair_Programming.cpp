#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

void solve(){
        int k,n,m;
        cin>>k>>n>>m;
        int arrn[n],arrm[m],arr[n+m];
        for (int i = 0; i < n; i++)
        {
            cin>>arrn[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin>>arrm[i];
        }
        int i =0,j=0,pos=0;
        bool check = true;
        while (i<n || j<m)
        {
           if(i<n && j<m && arrn[i]==0 && arrm[j]==0){
                arr[pos] =  0;
                pos++;
                arr[pos] = 0;
                pos++;
                k+=2;
                i++; 
                j++;
            }else if(i<n && arrn[i]<=k && arrn[i]!=0){
                arr[pos] = arrn[i];
                i++;
                pos++;
            }else if(j<m && arrm[j]<=k && arrm[j]!=0){
                arr[pos] = arrm[j];
                j++;
                pos++;
            }else if(i<n && arrn[i]==0){
                arr[pos] =  0;
                pos++;
                k++;
                i++;
            }else if(j<m && arrm[j]==0){
                arr[pos] =  0;
                pos++;
                k++;
                j++;
            }
            else{
                check = false;
                break;
            }
            
        }
        
       
        if(check){
            for (int i = 0; i < n+m; i++)
            {
                cout<<arr[i]<<sp;
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
             
    }
    
    return 0;
}