//basic 7
#include<iostream>
#include <ctype.h>
using namespace std;  
int main()  
{  
    int real1, imaginary1, real2, imaginary2, repeattimes;  
    char calculate;  
    cin>>repeattimes;  
    for(int i=0; i<repeattimes; i++){  
        cin>>calculate;  
        while(calculate!='+'&&calculate!='-'&&calculate!='*'){  
            cin>>calculate;  
        }  
        cin>>real1>>imaginary1>>real2>>imaginary2;  
        if(calculate=='+'){  
            cout<<real1+real2<<" "<<imaginary1+imaginary2<<endl;
        }  
        else if(calculate=='-'){  
            cout<<real1-real2<<" "<<imaginary1-imaginary2<<endl;
        }  
        else if(calculate=='*'){  
            cout<<real1*real2-imaginary1*imaginary2<<" "<<real1*imaginary2+real2*imaginary1<<endl;
        }  
    }   
}