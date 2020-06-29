#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x, y;
    cin >> x >> y;
    if(sqrt(x*x+y*y) <= 100){
        cout << "inside";
    }
    else{
        cout << "outside";
    }
    
    return 0;
}