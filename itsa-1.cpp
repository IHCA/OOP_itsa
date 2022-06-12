/* 
*****     * ***** ***** *   * ***** *     ***** ***** ***** 
*   *     *     *     * *   * *     *         * *   * *   * 
*   *     * ***** ***** ***** ***** *****     * ***** ***** 
*   *     * *         *     *     * *   *     * *   *     * 
*****     * ***** *****     * ***** *****     * *****     * 
*/  
//basic 1
#include<iostream>
using namespace std;  
int main(){  
    int i;  
    char input[16];  
    while(cin>>input){  
        for(i=0; i<4; i++){  
            if(input[i]=='0'||input[i]=='2'||input[i]=='3'||input[i]=='5'||input[i]=='7'||input[i]=='8'||input[i]=='9'){  
                cout<<"*****";  
            }  
            else if(input[i]=='1'){  
                cout<<"    *";  
            }  
            else if(input[i]=='4'){  
                cout<<"*   *";  
            }  
            else if(input[i]=='6'){  
                cout<<"*    ";  
            }  
            if(i!=3){  
                cout<<" ";  
            }  
            else{  
                cout<<endl;  
            }  
        }  
        for(int i=0; i<4; i++){  
            if(input[i]=='0'||input[i]=='4'||input[i]=='8'||input[i]=='9'){  
                cout<<"*   *";  
            }  
            else if(input[i]=='1'||input[i]=='2'||input[i]=='3'||input[i]=='7'){  
                cout<<"    *";  
            }  
            else if(input[i]=='5'||input[i]=='6'){  
                cout<<"*    ";  
            }  
            if(i!=3){  
                cout<<" ";  
            }  
            else{  
                cout<<endl;  
            }  
        }  
        for(int i=0; i<4; i++){  
            if(input[i]=='2'||input[i]=='3'||input[i]=='4'||input[i]=='5'||input[i]=='6'||input[i]=='8'||input[i]=='9'){  
                cout<<"*****";  
            }  
            else if(input[i]=='1'||input[i]=='7'){  
                cout<<"    *";  
            }  
            else if(input[i]=='0'){  
                cout<<"*   *";  
            }  
            if(i!=3){  
                cout<<" ";  
            }  
            else{  
                cout<<endl;  
            }  
        }  
        for(int i=0; i<4; i++){  
            if(input[i]=='0'||input[i]=='6'||input[i]=='8'){  
                cout<<"*   *";  
            }  
            else if(input[i]=='1'||input[i]=='3'||input[i]=='4'||input[i]=='5'||input[i]=='7'||input[i]=='9'){  
                cout<<"    *";  
            }  
            else if(input[i]=='2'){  
                cout<<"*    ";  
            }  
            if(i!=3){  
                cout<<" ";  
            }  
            else{  
                cout<<endl;  
            }  
        }  
        for(int i=0; i<4; i++){  
            if(input[i]=='1'||input[i]=='4'||input[i]=='7'||input[i]=='9'){  
                cout<<"    *";  
            }  
            else{  
                cout<<"*****";  
            }  
            if(i!=3){  
                cout<<" ";  
            }  
            else{  
                cout<<endl;  
            }  
        }  
    }  
} 