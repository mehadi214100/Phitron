#include<bits/stdc++.h>
using namespace std;

void change(int* a,int* b,int* c,int* d){
  int tempa = *a;
  int tempb = *b;
  int tempc = *c;
  int tempd = *d;
  *a = *c;
  *b = tempa;
  *d = tempb;
  *c = tempd;
 


}

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    bool check = true;
    for (int i = 0; i < 4; i++)
    {
      if(a<b && a<c && b<d && c<d){
        check = false;
        cout<<"YES"<<endl;
        break;
      }else{
        change(&a,&b,&c,&d);
      }
    }
    if(check){
      cout<<"NO"<<endl;
    }
  
  }
  

  

  return 0;
}