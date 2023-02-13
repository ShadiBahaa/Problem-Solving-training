#include <bits/stdc++.h>
using namespace std;
int main(){
    int number, ik,jk;
    for (int i =1 ; i<=5; i++){
        for (int j = 1; j<=5; j++){
            cin>>number;
            if (number == 1){
                ik = i;
                jk = j;
            }
        }
    }
    cout<<abs(3-ik)+abs(3-jk)<<endl;
}
