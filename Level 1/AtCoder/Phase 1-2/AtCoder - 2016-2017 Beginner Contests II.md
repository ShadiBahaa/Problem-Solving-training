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
## 3-	Beginner Contest 66 B
Problem Link:
https://atcoder.jp/contests/abc066/tasks/abc066_b
```cpp
#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    for (int i = 0; i<s.size()/2; ++i){
        if (s[i]!=s[i+s.size()/2])return false;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    s.pop_back();
    while (true){
        if (s.size()%2==0 && check(s)){
            cout<<s.size()<<endl;
            return 0;
        }
        s.pop_back();
    }
}
```
## 4-	Beginner Contest 67 B
Problem Link:
https://atcoder.jp/contests/abc067/tasks/abc067_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    cout<<accumulate(arr,arr+k,0)<<endl;
}
```
