# Greedy 
## 1- Round 182 B:
Problem link: https://codeforces.com/problemset/problem/302/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (int i = 0; i<n; ++i){
        int c,t;
        cin>>c>>t;
        v[i] = c*t;
        if (i>0)v[i]+=v[i-1];
    }
    while (m--){
        int val;
        cin>>val;
        auto it = lower_bound(v.begin(),v.end(),val);
        cout<<(it-v.begin())+1<<endl;
    }
}
```
