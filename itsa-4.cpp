//basic 4
#include<iostream>
using namespace std;  
//0~2h-30/0.5
//2~4h-40/0.5
//60/0.5 
int main(){  
    int inhour, inmin, outhour, outmin, totaltime;  
    while(cin>>inhour>>inmin>>outhour>>outmin){  
        if((outhour-inhour)==0){  
            totaltime=outmin-inmin;  
        }  
        else{  
            totaltime=60*(outhour-inhour-1)+60-inmin+outmin;  
        }  
        if(totaltime<=120){  
            cout<<totaltime/30*30<<endl;  
        }  
        else if(totaltime<=240){  
            cout<<(totaltime-120)/30*40+120<<endl;  
        }  
        else{  
            cout<<(totaltime-240)/30*60+280<<endl;  
        }  
    }  
}  