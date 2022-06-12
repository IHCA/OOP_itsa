//basic 8
#include<iostream>
using namespace std;  
int main()  
{  
    int inputnum, isprime=1;  
    while(cin>>inputnum){  
        for(int i=2; i<inputnum/2; i++){  
            if(inputnum%i==0){  
                cout<<"NO"<<endl;  
                isprime=0;  
                break;  
            }  
        }  
        if(isprime==1){  
            cout<<"YES"<<endl;  
        }  
    }  
  
    return 0;  
}  