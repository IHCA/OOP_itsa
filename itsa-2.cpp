//basic 2
#include<iostream>
#include<iomanip>
using namespace std;  
int main(){  
    int mi;  
    double km;  
    while(cin>>mi){  
        km=mi*1.6;  
        cout<<fixed<<setprecision(1)<<km<<endl;
    }  
}