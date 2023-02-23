#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {0,1,2};
    vector<vector<int>> all;
    all.push_back(v);
    for (int i = 1; i<6; ++i){
        if (i%2){
            swap(v[0],v[1]);
        }else {
            swap(v[1],v[2]);
        }
        all.push_back(v);
    }
    int n;
    cin>>n;
    n%=6;
    int x;
    cin>>x;
    cout<<all[n][x]<<endl;
}
