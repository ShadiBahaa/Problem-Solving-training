# Data Structure
## 2- Round 465 B
Problem link: https://codeforces.com/problemset/problem/935/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = 0;
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    for (int i = 1; i<n; ++i){
        ans += max(0, k-(arr[i]+arr[i-1]));
        arr[i] += max(0, k-(arr[i]+arr[i-1]));
    }
    cout<<ans<<endl;
    for (int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}
```
