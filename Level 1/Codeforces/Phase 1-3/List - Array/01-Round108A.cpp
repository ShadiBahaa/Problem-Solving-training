#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    map<int,int> mp;
    for (int i = 0; i<m; ++i){
        int maxi = 0;
        for (int j = 0; j<n; ++j){
            maxi = max(maxi,arr[j][i]-'0');
        }
        mp[i] = maxi;
    }
    int cnt = 0;
    for (int i = 0; i<n; ++i){
        bool succ = false;
        for (int j = 0; j<m; ++j){
            if (arr[i][j]-'0'==mp[j]){
                succ = true;
                break;
            }
        }
        if (succ)cnt++;
    }
    cout<<cnt<<endl;
}
