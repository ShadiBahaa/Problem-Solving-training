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
## 2-	Beginner Contest 65 A
Problem Link:
https://atcoder.jp/contests/abc065/tasks/abc065_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,a,b;
    cin>>x>>a>>b;
    if (-a+b<=0){
        cout<<"delicious"<<endl;
    }else if (-a+b<=x){
        cout<<"safe"<<endl;
    }else {
        cout<<"dangerous"<<endl;
    }
}
```
## 3-	Beginner Contest 66 A
Problem Link:
https://atcoder.jp/contests/abc066/tasks/abc066_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for (int i = 0; i<3; ++i)cin>>arr[i];
    sort(arr,arr+3);
    cout<<arr[0]+arr[1]<<endl;
}
```
## 4- Beginner Contest 67 A
Problem Link:
https://atcoder.jp/contests/abc067/tasks/abc067_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a%3 && b%3 && (a+b)%3)cout<<"Impossible"<<endl;
    else cout<<"Possible"<<endl;
}
```
## 5- Beginner Contest 68 A
Problem Link:
https://atcoder.jp/contests/abc068/tasks/abc068_a
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<"ABC"<<s<<endl;
}
```
