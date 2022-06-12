//other 40
#include <iostream>
using namespace std;        
int main(){  
    int a, b, c, tmp;  
    cin>>a>>b>>c;  
    if(a>b){  
        tmp=b;  
        b=a;  
        a=tmp;  
    }  
    if(a>c){  
        tmp=a;  
        a=c;  
        c=tmp;  
    }  
    if(b>c){  
        tmp=b;  
        b=c;  
        c=tmp;  
    }  
    if((a+b)<=c){  
        cout<<"Less than the third side\n";  
    }  
    else{  
        cout<<"Bigger than the third side\n";  
    }  
}  