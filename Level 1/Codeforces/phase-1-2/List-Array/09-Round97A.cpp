#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<pair<int,int>> ans;
    for (int i =1; i<=n;i++){
        int x;
        cin>>x;
        ans.insert({x,i});
    }
    for (auto i:ans){
        cout<<i.second<<" ";
    }
    cout<<endl;
}
