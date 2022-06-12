//basic 37
#include <iostream>
using namespace std;        
int main(){  
    int num[4], tmp;  
    cin>>num[0]>>num[1]>>num[2]>>num[3];  
    for(int i=0; i<3; i++){  
        for(int j=0; j<3; j++){  
            if(num[j]>num[j+1]){  
                tmp=num[j];  
                num[j]=num[j+1];  
                num[j+1]=tmp;  
            }  
        }  
    }  
    if(num[0]==num[1]&&num[1]==num[2]&&num[2]==num[3]){  
        cout<<"WIN\n";  
    }  
    else if((num[0]==num[1]&&num[1]==num[2])||(num[1]==num[2]&&num[2]==num[3])){  
        cout<<"R\n";  
    }  
    else if(num[0]==num[1]){  
        if(num[2]==num[3]){  
            cout<<2*num[2]<<endl;  
        }  
        else{  
            cout<<num[2]+num[3]<<endl;  
        }  
    }  
    else if(num[1]==num[2]){  
        cout<<num[0]+num[3]<<endl;  
    }  
    else if(num[2]==num[3]){  
        cout<<num[0]+num[1]<<endl;  
    }  
    else{  
        cout<<"R\n";  
    }  
} 