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
## 5-	Beginner Contest 191 A
Problem Link:
https://atcoder.jp/contests/abc191/tasks/abc191_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    double v,t,s,d;
    cin>>v>>t>>s>>d;
    if (d/v <t || d/v>s){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
}
```
## 6-	Beginner Contest 192 A
Problem Link:
https://atcoder.jp/contests/abc192/tasks/abc192_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    cout<<((x/100+1)*100-x)<<endl;
}
```
## 7- Beginner Contest 194 A
Problem Link:
https://atcoder.jp/contests/abc192/tasks/abc192_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a+b>=15 && b>=8){
        cout<<1<<endl;
    }else if (a+b>=10 && b>=3){
        cout<<2<<endl;
    }else if (a+b>=3){
        cout<<3<<endl;
    }else {
        cout<<4<<endl;
    }
}
```
## 8-	Beginner Contest 196 A
Problem Link:
https://atcoder.jp/contests/abc196/tasks/abc196_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<b-c<<endl;
}
```
