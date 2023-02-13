#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    char c[53]{};
    cin>>n;
    for (int i = 0; i<n; i++){
        cin>>c[i];
    }
    for (int i = 1; i<n;i++){
        if (c[i]==c[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
