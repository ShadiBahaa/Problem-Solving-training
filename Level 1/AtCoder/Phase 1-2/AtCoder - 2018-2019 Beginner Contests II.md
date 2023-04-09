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
## 2- Beginner Contest 118 B
Problem Link:
https://atcoder.jp/contests/abc118/tasks/abc118_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<int,int> mp;
    for (int i = 0; i<n ;++i){
        int k;
        cin>>k;
        while (k--){
            int a;
            cin>>a;
            mp[a]++;
        }
    }
    int ans = 0;
    for (pair<int,int> pa:mp){
        if (pa.second==n)ans++;
    }
    cout<<ans<<endl;
}
```
## 3-	Beginner Contest 119 B
Problem Link:
https://atcoder.jp/contests/abc119/tasks/abc119_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,double> mp;
    mp["JPY"] = 1;
    mp["BTC"] = 380000;
    double ans = 0;
    int n;
    cin>>n;
    while (n--){
        double x;
        string s;
        cin>>x>>s;
        ans+=x*mp[s];
    }
    cout<<fixed<<ans<<endl;
}
```
