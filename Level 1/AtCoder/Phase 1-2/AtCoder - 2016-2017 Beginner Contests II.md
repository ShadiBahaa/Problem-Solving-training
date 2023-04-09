# AtCoder - 2016-2017 Beginner Contests II
## 1- Beginner Contest 64 B
Problem Link:
https://atcoder.jp/contests/abc064/tasks/abc064_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; ++i)cin>>arr[i];
    cout<<*max_element(arr,arr+n)-*min_element(arr,arr+n)<<endl;
}
```
