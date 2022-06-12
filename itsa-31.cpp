//other 42
#include <iostream>
using namespace std;        
/*
5 3
*****
*****
*****
*/
int main(){  
    int m, n, i, j;  
    cin>>m>>n;  
    if(n==0||m==0){  
        cout<<"no answer\n";  
    }  
    else{  
        for(i=0; i<n; i++){  
            for(j=0; j<m; j++){  
                cout<<"*";  
            }  
            cout<<endl;  
        }  
    }  
}  