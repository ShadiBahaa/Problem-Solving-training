#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    int n;
    cin>>n;
    for (int i = 0; i<n; ++i){
        int x;
        cin>>x;
        mp[x]++;
    }
    if (!mp[1]){
        cout<<0<<endl;
    }else if (!mp[2]){
        cout<<mp[1]/3<<endl;
    }
    else if (mp[1]==mp[2]){
        cout<<mp[2]<<endl;
    }else if (mp[1]>mp[2]){
        cout<<mp[2]+(mp[1]-mp[2])/3<<endl;
    }else {
        cout<<mp[1]<<endl;
    }
}
