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
        int arr[9] = {9,8,7,6,5,4,3,2,1};
        if(n<=9) cout<<n<<endl;
        else{
            int res = 9;
            int curr = 8; 
            string s  = "9";
    	    while (res!=n)
            {
                for (int i = 1; i <= curr; i++)
                {
                    int rr = res+i;
                    if(rr==n){
                        // cout<<"op1 "<<res<<sp<<s<<sp<<rr<<sp<<i<<endl;
                        res = rr;
                        string c = to_string(i);
                        s+=c;
                        break;
                    }
                    if(i==curr){
                        res = res + curr;
                        string c = to_string(curr);
                        s+=c;
                    }
                }
                curr--;
                
            }
            sort(s.begin(),s.end());
            cout<<s<<endl;
            
        }
        

    }
    
    return 0;
}