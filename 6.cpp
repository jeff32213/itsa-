#include<iostream>
using namespace std;

int main(){
    int i;
    cin >> i;
    if(i==3 || i==4 || i==5)
        cout << "Spring";
    if(i==6 || i==7 || i==8)
        cout << "Summer";
    if(i==9 || i==10 || i==11)
        cout << "Autumn";
    if(i==12 || i==1 || i==2)
        cout << "Winter";

    return 0;
}