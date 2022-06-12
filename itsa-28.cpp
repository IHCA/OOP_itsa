//other 38
#include <iostream>
using namespace std;        
int main(){  
    int input, num=1;  
    cin>>input;  
    for(int i=input; i>0; i--){  
        cout<<i<<" = "<<num<<endl;  
        num=num*2+2;  
    }  
} 