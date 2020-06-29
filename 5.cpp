#include<iostream>
using namespace std;

int main(){
    int input, b[8]={0}, i;
    cin >> input;
    if(input<0){
        b[0]=1;
        input = input + 128;
    }
    int tmp1=1, tmp2=64;
    while(input != 0){
        b[tmp1] = input/tmp2;
        input = input%tmp2;
        tmp1++;
        tmp2=tmp2/2;
    }

    for(i=0; i<8; i++)
        cout << b[i];

    return 0;
}