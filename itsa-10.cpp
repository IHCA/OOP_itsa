//basic 11
#include <iostream>  
using namespace std;
int main(){  
    int col, row, num[100][100];  
    while(cin>>col>>row){  
        for(int i=0; i<100; i++){  
            for(int j=0; j<100; j++){  
                num[i][j]='\0';  
            }  
        }  
        for(int i=0; i<col; i++){  
            for(int j=0; j<row; j++){  
                cin>>num[i][j];  
            }  
        }  
        for(int i=0; i<row; i++){  
            for(int j=0; j<col-1; j++){  
                cout<<num[j][i]<<" ";  
            }  
            cout<<num[col-1][i]<<endl;  
        }  
    }  
} 
