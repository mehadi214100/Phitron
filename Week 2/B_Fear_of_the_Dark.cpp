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
        double px,py,ax,ay,bx,by;
        cin>>px>>py;
        cin>>ax>>ay;
        cin>>bx>>by;
        double AO = sqrt((ax*ax)+(ay*ay));
        double AP = sqrt(((ax-px)*(ax-px))+((ay-py)*(ay-py)));
        
        double BO = sqrt((bx*bx)+(by*by));
        double BP = sqrt(((bx-px)*(bx-px))+((by-py)*(by-py)));

        double AB = sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));
        double OP = sqrt((px*px)+(py*py));
        
        double ans1 = max(AO,AP);
        double ans2 = max(BO,BP);
        double ans = min(ans1,ans2);
        double radius = AB/2;
        double res;
        if((AP<=radius && BO<=radius) || (BP<=radius && AO<=radius)){
                res = min(ans,radius);
        }else{
            res = ans;
        }

        cout<<fixed<<setprecision(10)<<res<<endl;


    }
    
    return 0;
}


