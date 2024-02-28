#include<bits/stdc++.h>
using namespace std;


struct matrix{
    int mat[3][3];
};

matrix matrixMul(matrix a,matrix b){
    matrix c;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += a.mat[i][k]*b.mat[k][j];
            }
            
            c.mat[i][j] = sum;
            
       }
       
    }
    return c;

}

matrix identy(){
    matrix x;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i==j){
                x.mat[i][j] = 1;
            }else{
                x.mat[i][j] = 0;
            }
        }
        
    }
    return x;
    
}

matrix power(matrix a,int n){
    if(n==0){
        return identy();
    }
    matrix x = power(a,n/2);

    if(n%2==0){
        return matrixMul(x,x);
    }else{
        return matrixMul(matrixMul(x,x),a);
    }
}


int main(){
    matrix a,b;
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            int x;cin>>x;
            a.mat[i][j] = x;
       }
       
    }
    // for (int i = 0; i < 3; i++)
    // {
    //    for (int j = 0; j < 3; j++)
    //    {
    //         int x;cin>>x;
    //         b.mat[i][j] = x;
    //    }
       
    // }
    matrix c = power(a,3);
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            cout<<c.mat[i][j]<<" ";
       }
       cout<<endl;
       
    }
    
    return 0;
}