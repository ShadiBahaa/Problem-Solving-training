# AtCoder - 2018-2019 Beginner Contests II
## 1-	Beginner Contest 117 B
Problem Link:
https://atcoder.jp/contests/abc117/tasks/abc117_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; ++i)cin>>arr[i];
    sort(arr,arr+n);
    cout<<((accumulate(arr,arr+n-1,0)>arr[n-1])?"Yes":"No")<<endl;
}
```
