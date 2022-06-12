//basic 21
#include <iostream>
#include <iomanip>
using namespace std;
int main(){  
    float max, min, input;  
    int i;  
    cin>>input;  
    max=min=input;  
    for(i=0; i<9; i++){  
        cin>>input;  
        if(input>max){  
            max=input;  
        }  
        if(input<min){  
            min=input;  
        }  
    }  
    cout<<"maximum:"<<fixed<<setprecision(2)<<max<<endl<<"minimum:"<<fixed<<setprecision(2)<<min<<endl;  
} 