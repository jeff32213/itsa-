#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float input, min, max;
    cin >> input;
    min = input;
    max = input;
    for(int i=0; i<9; i++){
        cin >> input;
        if(input > max)
            max = input;
        if(input < min)
            min = input;
    }
    cout << "maximum:" << fixed << setprecision(2) << max << endl;
    cout << "minimum:" << fixed << setprecision(2) << min << endl;

    return 0;
}