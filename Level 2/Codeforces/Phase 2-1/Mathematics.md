# Mathematics
## 1- Round 379 B
Problem link: https://codeforces.com/problemset/problem/734/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int mini = min(k2,min(k5,k6));
    int ans = mini*256;
    k2-=mini;
    ans+= min(k2,k3)*32;
    cout<<ans<<endl;
}
```
