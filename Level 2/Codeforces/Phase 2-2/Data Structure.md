# Data Structure
## 1- Round 227 B:
Problem link: https://codeforces.com/problemset/problem/387/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    int arr[n];
    multiset<int> mm;
    for (int i = 0; i<n; ++i)cin>>arr[i];
    for (int i = 0; i<m; ++i)cin>>x,mm.insert(x);
    int ans = 0;
    for (int i = 0; i<n; ++i)
    {
        auto it = mm.lower_bound(arr[i]);
        if (it==mm.end())ans++;
        else if (*it>=arr[i])
        {
            mm.erase(it);
        }
    }
    cout<<ans<<endl;
}
```
## 2- Round 246 B:
Problem link: https://codeforces.com/problemset/problem/432/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    map<int,int> cnt;
    for (int i = 0; i<n; ++i){
        cin>>x[i]>>y[i];
        cnt[x[i]]++;
    }
    for (int i = 0; i<n; ++i){
        cout<<(n-1)+cnt[y[i]]<<" "<<(n-1)-cnt[y[i]]<<endl;
    }
}
```
## 3- Round 251 B:
Problem link: https://codeforces.com/problemset/problem/439/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    long long arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long ans = 0;
    for (int i = 0; i<n; ++i){
        ans += x*arr[i];
        if (x>1)x--;
    }
    cout<<ans<<endl;
}
```
## 4- Round 315 B
Problem link: https://codeforces.com/problemset/problem/569/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    set<int> s1;
    multiset<int> ms;
    for (int i = 0; i<n; ++i)cin>>v[i],s1.insert(i+1),ms.insert(v[i]);
    int num = 1;
    for (int i = 0; i<n; ++i){
        if (s1.count(v[i])){
            s1.erase(v[i]);
        }else {
            while (ms.count(num))num++;
            v[i] = num;
            num++;
        }
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
```
## 5- Round 345 B
Problem link: https://codeforces.com/problemset/problem/651/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    vector<int> ans;
    vector<int> v(n);
    for (int i = 0; i<n; ++i)cin>>v[i];
    sort(v.begin(),v.end());
    int res = 0;
    for (int i = 0; i<n; ++i){
        if (s.count(i))continue;
        s.insert(i);
        ans.push_back(v[i]);
        int now = v[i];
        for (int j = i+1; j<n; ++j){
            if (!s.count(j) && v[j]>now){
                s.insert(j);
                ans.push_back(v[j]);
                now = v[j];
            }
        }
    }
    for (int i = 1; i<ans.size(); ++i){
        if (ans[i]>ans[i-1])res++;
    }
    cout<<res<<endl;
}
```
## 6- Round 187 B
Problem link: https://codeforces.com/problemset/problem/315/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5]{};
    for (int i = 1; i<=n; ++i)cin>>arr[i];
    int add = 0;
    while (m--){
        int type;
        cin>>type;
        if (type==1){
            int v,x;
            cin>>v>>x;
            arr[v] = x - add;
        }else if (type==2){
            int y;
            cin>>y;
            add += y;
        }else {
            int q;
            cin>>q;
            cout<<arr[q] + add<<endl;
        }
    }
}
```
## 7- Round 248 B
Problem link: https://codeforces.com/problemset/problem/433/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n+1] {};
    long long ord[n+1] {};
    for (int i = 1; i<=n; ++i)
    {
        cin>>arr[i];
        ord[i] = arr[i];
        arr[i]+=arr[i-1];
        //ord[i-1]=arr[i];
    }
    sort(ord+1,ord+n+1);
    for (int i = 1; i<=n; ++i){
        ord[i]+=ord[i-1];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int l,r,t;
        cin>>t>>l>>r;
        if (t==1)
        {
            cout<<arr[r]-arr[l-1]<<endl;
        }
        else
        {
            cout<<ord[r]-ord[l-1]<<endl;
        }
    }
}
```
