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

        for (int i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }

        int k = 1;
        int current = arr[0];
        for (int i = 0; i < n ; i++)
        {
            if(i==0) cout<<arr[i]<<sp;
            else{
                if(k%2==0){
                    double value = round((arr[i]+current*1.0)/2);
                    int data = value*2;
                    cout<<data<<sp;
                    current = data;
                }else{
                    double value = round((arr[i]+current*1.0)/2);
                    int data = value*2;
                    cout<<data<<sp;
                    current = data;
                }
            }
            k++;
        }
        cout<<endl;
        
        
    }
    
    return 0;
}