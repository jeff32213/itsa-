#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    int student[n][3];
    int sum[n]={0};
    int under60[n]={0};
    int up80[n]={0};
    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            cin >> student[i][j];
            sum[i] = sum[i] + student[i][j];
            if(student[i][j] < 60){
                under60[i]++;
            }
            if(student[i][j] >= 80){
                up80[i]++;
            }
        }

        if(under60[i] == 0 || (under60[i] == 1 && sum[i] >= 220)){
            cout << "P" << endl;
        }
        else if(under60[i] == 1 || (under60[i] == 2 && up80[i] == 1)){
            cout << "M" << endl;
        }
        else{
            cout << "F" << endl;
        }
    }

    return 0;
}