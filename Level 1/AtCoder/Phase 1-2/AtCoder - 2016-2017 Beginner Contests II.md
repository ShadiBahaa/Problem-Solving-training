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
## 2-	Beginner Contest 65 B
Problem Link:
https://atcoder.jp/contests/abc065/tasks/abc065_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,bool> vis;
    int n;
    cin>>n;
    int cnt = 1;
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    vis[1] = true;
    int val = arr[0];
    while (true){
        if (vis[val]){
            cout<<-1<<endl;
            return 0;
        }
        if (val==2){
            cout<<cnt<<endl;
            return 0;
        }
        vis[val]=true;
        val = arr[val-1];
        cnt++;
    }
}
```
