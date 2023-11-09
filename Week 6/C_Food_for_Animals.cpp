#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string output[n];
    for (int i = 0; i < n; i++)
    {
        int a,b,c,x,y,remainFood=0,remainAnimal=0;
        cin>>a>>b>>c>>x>>y;
        if (a>x){
            remainFood +=a-x; 
        }else{
            remainAnimal += x-a;
        }
        if (b>y){
            remainFood +=b-y; 
        }else{
            remainAnimal += y-b;
        }
        if (remainAnimal>c)
        {
            output[i]="NO";
        }else{
            output[i]="YES";
        }
        
        
        
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<output[i]<<'\n';
    }
    
    

}