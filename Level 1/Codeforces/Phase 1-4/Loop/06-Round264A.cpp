#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int ans = 100;
    bool ok = false;
    for (int i = 0; i<n; ++i){
        int x,y;
        cin>>x>>y;
        if (x<s){
            if(y) ans = min(ans,y);
            ok = true;
        }
        else if (x==s && !y){
            ok = true;
        }
    }
    if (!ok){
        cout<<-1<<endl;
    }else {
        cout<<100-ans<<endl;
    }
}
