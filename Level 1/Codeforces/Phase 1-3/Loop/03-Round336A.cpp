#include <bits/stdc++.h>
using namespace std;
bool by(pair<int,int> &a, pair<int,int> &b){
    return (a.first>b.first);
}
int main(){
    int n,s;
    cin>>n>>s;
    vector<pair<int,int>> v;
    while (n--){
        int f,t;
        cin>>f>>t;
        v.push_back({f,t});
    }
    int cnt = 0;
    sort(v.begin(),v.end(),by);
    for (pair<int,int> p: v){
        cnt+=(s-p.first);
        if (p.second>cnt){
            cnt+=(-cnt+p.second);
        }
        s = p.first;
    }
    cout<<cnt+s<<endl;
}
