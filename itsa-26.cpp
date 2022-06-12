//others 30
#include <iostream>
using namespace std;        
int main(){  
    long long input, output=0;  
    while(cin>>input){  
        output=0;  
        while(input!=0){  
            output=output*10+(input%10);  
            input=input/10;  
        }  
        cout<<output<<endl;  
    }  
}  