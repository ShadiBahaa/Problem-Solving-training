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
## 3-	Beginner Contest 119 A
Problem Link:
https://atcoder.jp/contests/abc119/tasks/abc119_a

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string year = s.substr(0,4);
    string month = s.substr(5,2);
    string day = s.substr(8);
    if (year<"2019"){
        cout<<"Heisei"<<endl;
    }else if (year=="2019" && month<"04"){
        cout<<"Heisei"<<endl;
    }else if (year=="2019" && month=="04" && day<="30"){
        cout<<"Heisei"<<endl;
    }else {
        cout<<"TBD"<<endl;
    }
}
```
## 4- Beginner Contest 120 A
Problem Link:
https://atcoder.jp/contests/abc120/tasks/abc120_a

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min(c,b/a)<<endl;
}
```
## 5-	Beginner Contest 121 A
Problem Link:
https://atcoder.jp/contests/abc121/tasks/abc121_a

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int H,W,h,w;
    cin>>H>>W>>h>>w;
    cout<<H*W-(h*W+w*(H-h))<<endl;
}
```
## 6-	Beginner Contest 122 A
Problem Link:
https://atcoder.jp/contests/abc122/tasks/abc122_a

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,char> mp;
    mp['A'] = 'T';
    mp['T'] = 'A';
    mp['C'] = 'G';
    mp['G'] = 'C';
    char b;
    cin>>b;
    cout<<mp[b]<<endl;
}
```
## 7-	Beginner Contest 123 A
Problem Link:
https://atcoder.jp/contests/abc123/tasks/abc123_a

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for (int i = 0; i<5; ++i){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for (int i = 0; i<5; ++i){
        for (int j = i+1; j<5; ++j){
            if (arr[j]-arr[i]>k){
                cout<<":("<<endl;
                return 0;
            }
        }
    }
    cout<<"Yay!"<<endl;
}
```
