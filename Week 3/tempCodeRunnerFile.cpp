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
        string s;cin>>s;
        int total = 0;
        int curr[n];
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='L') curr[i]= i-0;
            else curr[i] = n-i-1;
            total += curr[i];

        }
        
        int l = 0;
        int r = n-1;
        int mid = (l+r)/2;
        int ct = 0;
        while (l<=mid && r>=mid)
        {
            char L = s[l];
            char R = s[r];
            
            if(n%2==0){
                if(r==mid && R=='L'){
                    total -= curr[r];
                    total += n-1-r;
                    cout<<total<<sp;
                    r--;
                    continue;
                }
            }


            if(r==mid && R=='R'){
                if(L=='R'){
                    l++;
                    continue;
                }
            }

            if(l==mid && l=='L'){
                if(r=='L'){
                    r--;
                    continue;
                }
            }
            
            if(L=='R' && R=='L'){
                l++;
                r--;
            }else if(L=='R' && R=='R'){

                total -= curr[r];
                total += (r-0);
                r--;
                // cout<<endl<<"op1"<<sp;
                cout<<total<<sp;
                ct++;
            }else if(L=='L' && R=='L'){
                total -= curr[l];
                total += n-1-l;
                l++;
                // cout<<endl<<"op2"<<sp;
                cout<<total<<sp;
                ct++;
            }else{
                int op1 =  n-1-l; // turn right angel
                int op2 = r-0; // turn left angel
                if(op1>=op2){
                    // cout<<endl<<"op3"<<sp;

                    total -= curr[l];
                    total += n-1-l;
                    l++;
                    cout<<total<<sp;
                    ct++;
                }else{
                    // cout<<endl<<"op4"<<sp;

                    total -= curr[r];
                    total += (r-0);
                    r--;
                    cout<<total<<sp;
                    ct++;
                }
            }
            
        }

        while(l<mid){
            if(s[l]=='L'){
                // cout<<endl<<"op5"<<sp;
                int left = n-1-l;
                int total1 = total - curr[l] + left;
                if(total1>total){
                    total = total1;
                }
                cout<<total<<sp;
                ct++;
            }
            l++;
        }
        while(r>mid){
            // cout<<r<<"R er man "<<endl;
            if(s[r]=='R'){   
                // cout<<endl<<"op6"<<sp;
                int left = r-0;
                int total1 = total - curr[r] + left;
                if(total1>total){
                    total = total1;
                }
                cout<<total<<sp;
                ct++;
            }
            r--;
        }
        for (int i = ct; i < n; i++)
        {
            // cout<<endl<<"op7"<<sp;
            cout<<total<<sp;
        }
        

        cout<<endl;

    }
    
    return 0;
}


