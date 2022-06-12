//basic 9
#include <iostream>  
using namespace std;
//add all the number betweens 1 and inputnum can be divide by 3
int main()  
{  
    int inputnum, outputnum;  
    while(cin>>inputnum){  
        outputnum=0;  
        for(int i=1; i<=inputnum; i++){  
            if(i%3==0)outputnum+=i;  
        }  
        cout<<outputnum<<endl;  
    }  
    return 0;  
} 