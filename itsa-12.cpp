//basic 14
#include <iostream>  
using namespace std;
//123321 YES
//1244221 NO
int main(){  
    string input;  
    int len, state=0;  
    cin>>input;  
    len=input.length();  
    for(int i=0; i<len/2; i++){  
        if(input[i]!=input[len-1-i]){  
            cout<<"NO"<<endl;  
            state=1;  
            break;  
        }  
    }  
    if(state==0){  
        cout<<"YES"<<endl;  
    }  
}  