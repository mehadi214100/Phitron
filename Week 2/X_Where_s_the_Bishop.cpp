#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin.ignore();
        char board[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin>>board[i][j];
            }
            
        }
        bool check = true;
        for (int i = 0; i < 8; i++)
        {  
            for (int j = 0; j < 8; j++)
            {
                if((board[i][j]=='#')&&(board[i-1][j+1]=='#')&&(board[i-1][j-1]=='#')&&(board[i+1][j+1]=='#')&&(board[i+1][j-1]=='#')){
                    cout<<i+1<<" "<<j+1<<endl;
                    check = false;
                    break;
                }
            }
            if(check==false){
                break;
            }
        }
        
        
    }
    
    
    return 0;
}