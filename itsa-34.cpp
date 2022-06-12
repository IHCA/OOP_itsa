//other 44
#include <iostream>
using namespace std;        
/*
3
  *********
 ***********
*************
*/


int main(){  
    int input, i, j;  
    cin>>input;  
    if(input==0)cout<<"No answer"<<endl;  
    else{  
        for(j=0; j<input; j++){  
            for(i=input-j-1; i>0; i--){  
                cout<<" ";  
            }  
            for(i=0; i<9+2*j; i++){  
                cout<<"*";  
            }  
            cout<<endl;  
        }  
    }  
}