# AtCoder - 2016-2017 Beginner Contests I
## 1-	Beginner Contest 64 A
Problem Link:
https://atcoder.jp/contests/abc064/tasks/abc064_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    string s;
    for (int i = 0; i<3; ++i){
        cin>>c;
        s+=c;
    }
    int val = stoi(s);
    if (val%4){
        cout<<"NO"<<endl;
    }else {
        cout<<"YES"<<endl;
    }
}
```
