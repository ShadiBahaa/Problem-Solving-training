#include <bits/stdc++.h>
using namespace std;
bool by(pair<int,int> &a, pair<int,int> &b){
    return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    map<pair<int,int>,int> mp;
    while (n--){
        int h,m;
        cin>>h>>m;
        mp[{h,m}]++;
    }
    int ans = INT_MIN;
    for (auto p : mp){
        ans = max(ans,p.second);
    }
    cout<<ans<<endl;
}
