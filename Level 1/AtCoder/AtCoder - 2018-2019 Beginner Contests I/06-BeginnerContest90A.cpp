#include <bits/stdc++.h>
using namespace std;
int main(){
    char x;
    for (int i = 0; i<3; ++i){
        for (int j = 0; j<3; ++j){
            cin>>x;
            if (i==j){
                cout<<x;
            }
        }
    }
    cout<<endl;
}
