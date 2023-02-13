#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int x;
    int ans = 0;
    while (n--){
        cin>>x;
        if (x>h)ans+=2;
        else ans++;
    }
    cout<<ans<<endl;
}
