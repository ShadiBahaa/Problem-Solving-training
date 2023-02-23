#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int init = 1;
    int watch = 0;
    while (n--){
        int l,r;
        cin>>l>>r;
        int dif = (l-init)/x;
        init+=(dif*x);
        watch+=(r-init+1);
        init = r+1;
    }
    cout<<watch<<endl;
}
