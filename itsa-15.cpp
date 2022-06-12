//basic 19
#include <iostream>  
#include <vector>
using namespace std;
class car{
    public:
    int start, end;
};
int main(){
    int start, end, num, car_num, state=0;
    cin>>num;
    car_num = num;
    vector<car> car_arr;
    for(int i=0; i<num; i++){
        state=0;
        cin>>start>>end;
        for(int j=0; j<car_arr.size(); j++){
            if(start>car_arr[j].end||start==car_arr[j].end){
                car_arr[j].start=start;
                car_arr[j].end=end;
                state=1;
                break;
            }
        }
        if(state==0){
            car input;
            input.start = start;
            input.end = end;
            car_arr.push_back(input);
        }
    }
    cout<<car_arr.size()<<endl;
}