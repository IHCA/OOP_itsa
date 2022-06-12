//basic 27
#include <iostream>  
using namespace std;
int main(){  
    char ans[10], guess[10];  
    int anum, bnum, state[10], i, j;  
    cin>>ans;  
    while(ans[0]!='0'){  
        cin>>guess;  
        while(ans!=guess){  
            if(guess[0]=='0'){  
                exit(1);  
            }  
            anum=bnum=0;  
            for(i=0; i<4; i++){  
                state[i]=0;  
            }  
            for(i=0; i<4; i++){  
                if(ans[i]==guess[i]){  
                    state[i]=1;  
                    anum++;  
                }  
            }  
            for(i=0; i<4; i++){  
                if(state[i]==0){  
                    for(j=0; j<4; j++){  
                        if(ans[i]==guess[j]){  
                            bnum++;  
                        }  
                    }  
                }  
            }  
            cout<<anum<<"A"<<bnum<<"B"<<endl;  
            cin>>guess;  
        }  
        cout<<"4A0B"<<endl;  
        cin>>ans;  
    }  
}  