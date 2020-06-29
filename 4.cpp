#include<iostream>
using namespace std;

int main(){
    int starthr, startmin, endhr, endmin, time, cost;
    cin >> starthr >> startmin >> endhr >> endmin;
    time = endhr*60+endmin - starthr*60-startmin;
    if(time <= 120){
        cost = (time/30)*30;
    }
    else if(time <= 240){
        cost = 120 + ((time-120)/30)*40;
    }
    else{
        cost = 120 + 160 + ((time-240)/30)*60;
    }

    cout << cost;

    return 0;
}