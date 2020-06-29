#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i;
    double d;
    cin >> i;
    d = (double)i * 1.6;
    cout << fixed << setprecision(1) << d;

    return 0;
}