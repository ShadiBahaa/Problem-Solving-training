#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,arrh[32]{},arrg[32]{},cnt = 0;
    cin>>n;
    for (int i = 0; i<n;i++){
        cin>>arrh[i]>>arrg[i];
    }
    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n;j++){
            if (arrh[i]==arrg[j]){
                ++cnt;
            }
        }
    }
    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n;j++){
            if (arrg[i]==arrh[j]){
                ++cnt;
            }
        }
    }
    cout<<cnt<<endl;
}
