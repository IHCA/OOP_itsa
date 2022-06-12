//basic 36
#include <iostream>
using namespace std;        
int main(){        
    int input;  
    while(cin>>input){  
        if(input%400==0){  
            cout<<"Bissextile Year\n";  
        }  
        else if(input%100==0){  
            cout<<"Common Year\n";  
        }  
        else if(input%4==0){  
            cout<<"Bissextile Year\n";  
        }  
        else{  
            cout<<"Common Year\n";  
        }  
    }  
}  