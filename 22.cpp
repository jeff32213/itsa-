#include <iostream>
using namespace std;

int main(){
    int arr[3][3], i;
    int check[8] = {0};
    bool flag = true;

    for(i=0; i < 3; i++)
        for(int j = 0; j<3; j++)
            cin >> arr[i][j];

    for(i=0; i<3; i++){
        check[i] = arr[i][0] + arr[i][1] + arr[i][2];
        check[i+3] = arr[0][i] + arr[1][i] + arr[2][i];
    }
    check[6] = arr[0][0] + arr[1][1] + arr[2][2];
    check[7] = arr[2][0] + arr[1][1] + arr[0][2];

    for(i=0; i<8; i++){
        if(check[i] == 3 || check[i] == 0){
            cout << "True" << endl;
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "False" << endl;
    }

    return 0;
}