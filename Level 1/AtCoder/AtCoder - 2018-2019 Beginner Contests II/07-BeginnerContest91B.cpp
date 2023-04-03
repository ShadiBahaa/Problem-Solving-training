#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mp;
    int m,n;
    cin>>n;
    string c;
    while (n--){
        cin>>c;
        mp[c]++;
    }
    cin>>m;
    while (m--){
        cin>>c;
        mp[c]--;
    }
    int ans = 0;
    for (auto it:mp){
        ans = max(ans,it.second);
    }
    cout<<ans<<endl;
}
