#include<iostream>
using namespace std;

int main(){
    int i, n, sum=0;
    cin >> n;
    for(i=1; i<=n; i++){
        if(i%3==0)
            sum = sum + i;
    }

    cout << sum;

    return 0;
}