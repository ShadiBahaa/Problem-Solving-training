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
## 4- Beginner Contest 120 B
Problem Link:
https://atcoder.jp/contests/abc120/tasks/abc120_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    for (int i = max(a,b); i>=1; --i){
        if (a%i == 0 && b%i ==0 && k==1){
            cout<<i<<endl;
            return 0;
        }else if (a%i == 0 && b%i == 0){
            k--;
        }

    }
}
```
## 5- Beginner Contest 121 B
Problem Link:
https://atcoder.jp/contests/abc121/tasks/abc121_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c;
    cin>>n>>m>>c;
    int b[m];
    int ans = 0;
    for (int i = 0; i<m ;++i)cin>>b[i];
    for (int i = 0; i<n ;++i){
        int code = c;
        for (int j = 0; j<m; ++j){
            int a;
            cin>>a;
            code+=a*b[j];
        }
        if (code>0)ans++;
    }
    cout<<ans<<endl;

}
```
## 6- Beginner Contest 122 B
Problem Link:
https://atcoder.jp/contests/abc122/tasks/abc122_b
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans = 0;
    string t = "ACGT";
    for (int i = 0; i<s.size(); ++i){
        for (int j = 1; j<=s.size(); ++j){
            string sub = s.substr(i,j);
            bool yes = true;
            for (char c:sub){
                if (t.find(c)==string::npos){
                    yes = false;
                    break;
                }
            }
            if (yes)ans = max(ans,(int)sub.size());
        }
    }
    cout<<ans<<endl;
}
```
