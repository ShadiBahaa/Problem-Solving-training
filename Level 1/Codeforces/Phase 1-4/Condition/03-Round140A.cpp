#include <bits/stdc++.h>
using namespace std;
int main(){
    long long arr[6];
    for (int i = 0; i<6; ++i){
        cin>>arr[i];
    }
    long long dx1 = arr[2] - arr[0];
    long long dx2 = arr[4] - arr[2];
    long long dy1 = arr[3] - arr[1];
    long long dy2 = arr[5] - arr[3];
    long long cross = dx1*dy2-dy1*dx2;
    if (cross==0){
        cout<<"TOWARDS"<<endl;
    }else if (cross<0){
        cout<<"RIGHT"<<endl;
    }else {
        cout<<"LEFT"<<endl;
    }
}
