#include<iostream>
using namespace std;

int main(){
    int i, n1, n2, tmp=0;
    cin >> n1;
    n2 = n1;
    while(n2 != 0){
        tmp = tmp + n2%10;
        n2 = n2/10;
        tmp = tmp * 10;
    }
    tmp = tmp/10;
    if(tmp == n1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}