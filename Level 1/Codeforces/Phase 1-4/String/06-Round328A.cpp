#include <bits/stdc++.h>
using namespace std;
int main(){
    string arr[8];
    for (int i = 0; i<8; ++i){
        cin>>arr[i];
    }
    int white = 8, black = 8;
    for (int i = 0; i<8; ++i){
        for (int j = 0; j<8; ++j){
            if (arr[j][i]=='B'){
                break;
            }else if (arr[j][i]=='W'){
                white = min(white,j);
                break;
            }
        }
        for (int j = 7; j>=0; --j){
            if (arr[j][i]=='W'){
                break;
            }else if (arr[j][i]=='B'){
                black = min(black,7-j);
                break;
            }
        }
    }
    if (white<=black){
        cout<<"A"<<endl;
    }else {
        cout<<"B"<<endl;
    }
}
