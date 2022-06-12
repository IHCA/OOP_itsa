//basic 34
#include <iostream>  
#include <iomanip>
using namespace std;
int main(){  
    int len, gen;  
    float wei;  
    while(cin>>len>>gen){  
        if(gen==1){  
            wei=(float)(len-80)*0.7;  
        }  
        else{  
            wei=(float)(len-70)*0.6;  
        }  
        cout<<fixed<<setprecision(1)<<wei<<endl; 
    }  
}  