//basic 3
#include<iostream>
using namespace std;  
int main(){  
    //200，(0,0)。
    int x, y;  
    while(cin>>x>>y){  
        if(x*x+y*y<=10000){  
            cout<<"inside"<<endl;  
        }  
        else{  
            cout<<"outside"<<endl;  
        }  
    }  
}  