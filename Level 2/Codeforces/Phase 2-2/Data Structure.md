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
