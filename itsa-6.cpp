//basic 6
#include<iostream>
using namespace std;  
int main(){  
    int month;  
    while(cin>>month){  
        if(3<=month&&month<=5){  
            cout<<"Spring"<<endl;  
        }  
        else if(6<=month&&8>=month){  
            cout<<"Summer"<<endl;  
        }  
        else if(9<=month&&11>=month){  
            cout<<"Autumn"<<endl;  
        }  
        else{  
            cout<<"Winter"<<endl;  
        }  
    }  
}