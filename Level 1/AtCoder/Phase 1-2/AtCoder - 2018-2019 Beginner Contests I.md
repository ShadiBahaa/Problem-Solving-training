# AtCoder - 2018-2019 Beginner Contests I
## 1-	Beginner Contest 117 A
Problem Link:
https://atcoder.jp/contests/abc117/tasks/abc117_a

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    double t,x;
    cin>>t>>x;
    cout<<fixed<<setprecision(10)<<t/x<<endl;
}
```
## 2-	Beginner Contest 118 A
Problem Link:
https://atcoder.jp/contests/abc118/tasks/abc118_a

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (b%a==0){
        cout<<a+b<<endl;
    }else {
        cout<<b-a<<endl;
    }
}
```
