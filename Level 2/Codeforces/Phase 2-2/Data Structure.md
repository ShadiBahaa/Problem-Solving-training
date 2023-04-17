# Data Structure
## 1- Round 227 B:
Problem link: https://codeforces.com/problemset/problem/387/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    int arr[n];
    multiset<int> mm;
    for (int i = 0; i<n; ++i)cin>>arr[i];
    for (int i = 0; i<m; ++i)cin>>x,mm.insert(x);
    int ans = 0;
    for (int i = 0; i<n; ++i)
    {
        auto it = mm.lower_bound(arr[i]);
        if (it==mm.end())ans++;
        else if (*it>=arr[i])
        {
            mm.erase(it);
        }
    }
    cout<<ans<<endl;
}
```
