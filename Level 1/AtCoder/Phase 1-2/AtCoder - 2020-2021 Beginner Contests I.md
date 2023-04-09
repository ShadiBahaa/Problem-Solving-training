# AtCoder - 2020-2021 Beginner Contests I
## 1- Beginner Contest 187 A
Problem Link:
https://atcoder.jp/contests/abc187/tasks/abc187_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int sum1 = 0,sum2 = 0;
    for (int i = 0; i<3; ++i){
        sum1+=a[i]-'0';
        sum2+=b[i]-'0';
    }
    cout<<max(sum1,sum2)<<endl;
}
```
## 2-	Beginner Contest 188 A
Problem Link:
https://atcoder.jp/contests/abc188/tasks/abc188_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    cout<<((min(x,y)+3>max(x,y))?"Yes":"No")<<endl;
}
```
## 3-	Beginner Contest 189 A
Problem Link:
https://atcoder.jp/contests/abc189/tasks/abc189_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if (s[1]==s[0] && s[2]==s[1]){
        cout<<"Won"<<endl;
    }else {
        cout<<"Lost"<<endl;
    }
}
```
## 4-	Beginner Contest 190 A
Problem Link:
https://atcoder.jp/contests/abc190/tasks/abc190_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (c){
        if (b>a){
            cout<<"Aoki"<<endl;
        }else {
            cout<<"Takahashi"<<endl;
        }
    }else {
        if (a>b){
            cout<<"Takahashi"<<endl;
        }else {
            cout<<"Aoki"<<endl;
        }
    }
}
```
