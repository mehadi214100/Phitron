#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b,c,sum;
    cin>>a>>b>>c;
    sum = (a*a)+(b*b);
    c = (c*c);
    if(sum<c) cout<<"Yes";
    else cout<<"No";
    return 0;
}


