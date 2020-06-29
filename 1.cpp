#include<iostream>
#include<vector>
#include<string>
using namespace std;
void func(int v[][23], int s, char number);
int main(){
    int i, j;
    char a, b, c, d;
    string str;
    cin >> str;
    int v[5][23];
    for(i=0; i<4; i++){
        func(v, i, str[i]);
    }

    for(i=0; i<5; i++){
        for(j=0; j<23; j++){
            if(v[i][j] == 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
void func(int v[][23], int s, char number){
    int start = s*6-1;
    if(number == '0'){
        v[0][start+1]=1;v[0][start+2]=1;v[0][start+3]=1;v[0][start+4]=1;v[0][start+5]=1;
        v[1][start+1]=1;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=1;
        v[2][start+1]=1;v[2][start+2]=0;v[2][start+3]=0;v[2][start+4]=0;v[2][start+5]=1;
        v[3][start+1]=1;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=1;v[4][start+2]=1;v[4][start+3]=1;v[4][start+4]=1;v[4][start+5]=1;
    }
    if(number == '1'){
        v[0][start+1]=0;v[0][start+2]=0;v[0][start+3]=0;v[0][start+4]=0;v[0][start+5]=1;
        v[1][start+1]=0;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=1;
        v[2][start+1]=0;v[2][start+2]=0;v[2][start+3]=0;v[2][start+4]=0;v[2][start+5]=1;
        v[3][start+1]=0;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=0;v[4][start+2]=0;v[4][start+3]=0;v[4][start+4]=0;v[4][start+5]=1;
    }
    if(number == '2'){
        v[0][start+1]=1;v[0][start+2]=1;v[0][start+3]=1;v[0][start+4]=1;v[0][start+5]=1;
        v[1][start+1]=0;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=1;
        v[2][start+1]=1;v[2][start+2]=1;v[2][start+3]=1;v[2][start+4]=1;v[2][start+5]=1;
        v[3][start+1]=1;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=0;
        v[4][start+1]=1;v[4][start+2]=1;v[4][start+3]=1;v[4][start+4]=1;v[4][start+5]=1;
    }
    if(number == '3'){
        v[0][start+1]=1;v[0][start+2]=1;v[0][start+3]=1;v[0][start+4]=1;v[0][start+5]=1;
        v[1][start+1]=0;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=1;
        v[2][start+1]=1;v[2][start+2]=1;v[2][start+3]=1;v[2][start+4]=1;v[2][start+5]=1;
        v[3][start+1]=0;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=1;v[4][start+2]=1;v[4][start+3]=1;v[4][start+4]=1;v[4][start+5]=1;
    }
    if(number == '4'){
        v[0][start+1]=1;v[0][start+2]=0;v[0][start+3]=0;v[0][start+4]=0;v[0][start+5]=1;
        v[1][start+1]=1;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=1;
        v[2][start+1]=1;v[2][start+2]=1;v[2][start+3]=1;v[2][start+4]=1;v[2][start+5]=1;
        v[3][start+1]=0;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=0;v[4][start+2]=0;v[4][start+3]=0;v[4][start+4]=0;v[4][start+5]=1;
    }
    if(number == '5'){
        v[0][start+1]=1;v[0][start+2]=1;v[0][start+3]=1;v[0][start+4]=1;v[0][start+5]=1;
        v[1][start+1]=1;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=0;
        v[2][start+1]=1;v[2][start+2]=1;v[2][start+3]=1;v[2][start+4]=1;v[2][start+5]=1;
        v[3][start+1]=0;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=1;v[4][start+2]=1;v[4][start+3]=1;v[4][start+4]=1;v[4][start+5]=1;
    }
    if(number == '6'){
        v[0][start+1]=1;v[0][start+2]=1;v[0][start+3]=1;v[0][start+4]=1;v[0][start+5]=1;
        v[1][start+1]=1;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=0;
        v[2][start+1]=1;v[2][start+2]=1;v[2][start+3]=1;v[2][start+4]=1;v[2][start+5]=1;
        v[3][start+1]=1;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=1;v[4][start+2]=1;v[4][start+3]=1;v[4][start+4]=1;v[4][start+5]=1;
    }
    if(number == '7'){
        v[0][start+1]=1;v[0][start+2]=1;v[0][start+3]=1;v[0][start+4]=1;v[0][start+5]=1;
        v[1][start+1]=0;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=1;
        v[2][start+1]=0;v[2][start+2]=0;v[2][start+3]=0;v[2][start+4]=0;v[2][start+5]=1;
        v[3][start+1]=0;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=0;v[4][start+2]=0;v[4][start+3]=0;v[4][start+4]=0;v[4][start+5]=1;
    }
    if(number == '8'){
        v[0][start+1]=1;v[0][start+2]=1;v[0][start+3]=1;v[0][start+4]=1;v[0][start+5]=1;
        v[1][start+1]=1;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=1;
        v[2][start+1]=1;v[2][start+2]=1;v[2][start+3]=1;v[2][start+4]=1;v[2][start+5]=1;
        v[3][start+1]=1;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=1;v[4][start+2]=1;v[4][start+3]=1;v[4][start+4]=1;v[4][start+5]=1;
    }
    if(number == '9'){
        v[0][start+1]=1;v[0][start+2]=1;v[0][start+3]=1;v[0][start+4]=1;v[0][start+5]=1;
        v[1][start+1]=1;v[1][start+2]=0;v[1][start+3]=0;v[1][start+4]=0;v[1][start+5]=1;
        v[2][start+1]=1;v[2][start+2]=1;v[2][start+3]=1;v[2][start+4]=1;v[2][start+5]=1;
        v[3][start+1]=0;v[3][start+2]=0;v[3][start+3]=0;v[3][start+4]=0;v[3][start+5]=1;
        v[4][start+1]=1;v[4][start+2]=1;v[4][start+3]=1;v[4][start+4]=1;v[4][start+5]=1;
    } 
}