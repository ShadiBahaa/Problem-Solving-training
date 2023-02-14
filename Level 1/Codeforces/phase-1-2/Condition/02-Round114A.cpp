#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,y;
    int x;
    cin>>n>>x>>y;
    int ans = ((int)ceil(y/100*n)-x);
    if (ans<0){
        cout<<0<<endl;
    }else {
        cout<<ans<<endl;
    }
}
