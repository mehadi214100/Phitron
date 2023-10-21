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
        int n;char curr;
        cin>>n>>curr;
        string s;cin>>s;
        int currPos = -1;
        int greenPos = -1;
        int res = -1;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if(c==curr){
                if(currPos==-1){
                    currPos = i;
                }
            }else if(c=='g' ){
                if(greenPos==-1){
                    greenPos = i;
                    if(currPos!=-1){
                        res = max(res,i-currPos);
                        currPos = -1;
                    }
                }else{
                    if(currPos!=-1){
                        res = max(res,i-currPos);
                        currPos = -1;
                    }
                }
            }
        }
        if(s[currPos]=='g' && curr=='g'){
            res = 0;
        }
        else if(currPos!=-1 ){
            res = max(res,n-currPos+greenPos);
        }
        cout<<res<<endl;


    }
    
    return 0;
}


