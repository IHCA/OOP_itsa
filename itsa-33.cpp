//other 43
#include <iostream>
using namespace std;        
/*
2
 *
***
 *
*/
int main(){  
    int input, i, j;  
    cin>>input;  
    for(i=0; i<input; i++){  
        for(j=input-i-1; j>0; j--){  
            cout<<" ";  
        }  
        for(j=0; j<i*2+1; j++){  
            cout<<"*";  
        }  
        cout<<endl;  
    }  
    for(i=0; i<input-1; i++){  
        for(j=0; j<i+1; j++){  
            cout<<" "; 
        }  
        for(j=2*(input-i-1)-1; j>0; j--){  
            cout<<"*";   
        }  
        cout<<endl;   
    }  
}  