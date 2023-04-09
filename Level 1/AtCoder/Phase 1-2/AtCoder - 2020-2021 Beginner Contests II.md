# AtCoder - 2020-2021 Beginner Contests II
## 1- Beginner Contest 187 B
Problem Link:
https://atcoder.jp/contests/abc187/tasks/abc187_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<double,double>> v(n);
    for (int i = 0; i<n; ++i){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    int ans = 0;
    for (int i = 0; i<n; ++i){
        for (int j = i+1; j<n; ++j){
            double tmp = (v[j].second-v[i].second)/(v[j].first-v[i].first);
            if (tmp<=1 && tmp>=-1){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
```
