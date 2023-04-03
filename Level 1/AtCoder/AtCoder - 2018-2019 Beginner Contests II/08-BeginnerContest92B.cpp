#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d,x;
    cin>>n>>d>>x;
    int ans = 0;
    int a;
    while (n--){
        cin>>a;
        int i = 1;
        while (true){
            if (i<=d){
                //cout<<i<<" ";
                ans++;
            }else {
                break;
            }
            i+=a;
        }
        //cout<<endl;
    }
    cout<<ans+x<<endl;
}
