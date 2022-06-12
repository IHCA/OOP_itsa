//basic 30
#include <iostream>  
using namespace std;
int main(){  
    int month, date;  
    cin>>month>>date;  
    if(month==1){  
        if(date>=21)cout<<"Aquarius\n";  
        else cout<<"Capricorn\n";  
    }  
    else if(month==2){  
        if(date>=19)cout<<"Pisces\n";  
        else cout<<"Aquarius\n";  
    }  
    else if(month==3){  
        if(date>=21)cout<<"Aries\n";  
        else cout<<"Pisces\n";  
    }  
    else if(month==4){  
        if(date>=21)cout<<"Taurus\n";  
        else cout<<"Aries\n";  
    }  
    else if(month==5){  
        if(date>=21)cout<<"Gemini\n";  
        else cout<<"Taurus\n";  
    }  
    else if(month==6){  
        if(date>=21)cout<<"Cancer\n";  
        else cout<<"Gemini\n";  
    }  
    else if(month==7){  
        if(date>=21)cout<<"Leo\n";  
        else cout<<"Cancer\n";  
    }  
    else if(month==8){  
        if(date>=21)cout<<"Virgo\n";  
        else cout<<"Leo\n";  
    }  
    else if(month==9){  
        if(date>=21)cout<<"Libra\n";  
        else cout<<"Virgo\n";  
    }  
    else if(month==10){  
        if(date>=21)cout<<"Scorpio\n";  
        else cout<<"Libra\n";  
    }  
    else if(month==11){  
        if(date>=21)cout<<"Sagittarius\n";  
        else cout<<"Scorpio\n";  
    }  
    else if(month==12){  
        if(date>=21)cout<<"Sagittarius\n";  
        else cout<<"Capricorn\n";  
    }  
}  