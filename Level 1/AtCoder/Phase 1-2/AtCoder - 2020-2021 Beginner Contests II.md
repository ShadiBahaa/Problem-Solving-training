# AtCoder - 2020-2021 Beginner Contests II
## 1- Beginner Contest 187 B
Problem Link:
https://atcoder.jp/contests/abc187/tasks/abc187_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<double,double>> v(n);
    for (int i = 0; i<n; ++i){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    int ans = 0;
    for (int i = 0; i<n; ++i){
        for (int j = i+1; j<n; ++j){
            double tmp = (v[j].second-v[i].second)/(v[j].first-v[i].first);
            if (tmp<=1 && tmp>=-1){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
```
## 2- Beginner Contest 188 B
Problem Link:
https://atcoder.jp/contests/abc188/tasks/abc188_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for (int i = 0; i<n; ++i)cin>>a[i];
    for (int i = 0; i<n; ++i){
        int b;
        cin>>b;
        sum+=a[i]*b;
    }
    cout<<((sum==0)?"Yes":"No")<<endl;
}
```
## 3- Beginner Contest 189 B
Problem Link:
https://atcoder.jp/contests/abc189/tasks/abc189_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x;
    cin>>n>>x;
    x*=100;
    int sum = 0;
    for (int i = 0; i<n ;++i){
        int v,p;
        cin>>v>>p;
        int am = v*p;
        sum+=am;
        if (sum>x){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
```
## 4- Beginner Contest 190 B
Problem Link:
https://atcoder.jp/contests/abc190/tasks/abc190_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,s,d;
    cin>>n>>s>>d;
    bool ok =false;
    for (int i = 0; i<n ;++i){
        int x,y;
        cin>>x>>y;
        if (x<s && y>d){
            ok = true;
        }
    }
    if (ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
```
## 5- Beginner Contest 191 B
Problem Link:
https://atcoder.jp/contests/abc191/tasks/abc191_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    for (int i = 0; i<n; ++i){
        int a;cin>>a;
        if (a!=x){
            cout<<a<<" ";
        }
    }
    cout<<endl;
}
```
## 6-	Beginner Contest 192 B
Problem Link:
https://atcoder.jp/contests/abc192/tasks/abc192_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for (int i = 0; i<s.size(); ++i){
        if (i%2 == 0 && !(s[i]>='a' && s[i]<='z')){
            cout<<"No"<<endl;
            return 0;
        }else if (i%2 && !(s[i]>='A' && s[i]<='Z')){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
```
## 7-	Beginner Contest 194 B
Problem Link:
https://atcoder.jp/contests/abc194/tasks/abc194_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int ans = INT_MAX;
    for (int i = 0; i<n; ++i){
        cin>>a[i]>>b[i];
        ans = min(ans,a[i]+b[i]);
    }
    int aa = min_element(a,a+n)-a;
    int ba = INT_MAX;
    for (int i = 0; i<n ; ++i){
        if (i==aa)continue;
        if (ba==INT_MAX){
            ba = i;continue;
        }
        if (b[i]<b[ba]){
            ba = i;
        }
    }
    ans = min(ans,max(a[aa],b[ba]));
    int bb = min_element(b,b+n)-b;
    int ab = INT_MAX;
    for (int i = 0; i<n ; ++i){
        if (i==bb)continue;
        if (ab==INT_MAX){
            ab = i;continue;
        }
        if (a[i]<a[ab]){
            ab = i;
        }
    }
    ans = min(ans,max(b[bb],a[ab]));
    cout<<ans<<endl;
}
```
