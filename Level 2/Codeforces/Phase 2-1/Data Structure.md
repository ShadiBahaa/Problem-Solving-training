# Data Structure
## 1- Round 465 B
Problem link: https://codeforces.com/problemset/problem/935/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int last = -1;
    int n;
    string s;
    cin>>n>>s;
    map<char,pair<int,int>> mp;
    mp['U'] = {0,1};
    mp['R'] = {1,0};
    int ans = 0;
    pair<int,int> now = {0,0};
    for (char c : s)
    {
        now.first+= mp[c].first;
        now.second+= mp[c].second;
        if (last == -1)
        {
            if (now.first > now.second)last = 0;
            else if (now.first < now.second)last = 1;
        }
        else if (now.first>now.second && last==1)
        {
            ans++;
            last = 0;
        }
        else if (now.first<now.second && last==0)
        {
            ans++;
            last = 1;
        }
    }
    cout<<ans<<endl;

}
```
## 2- Round 377 B
Problem link: https://codeforces.com/problemset/problem/732/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = 0;
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    for (int i = 1; i<n; ++i){
        ans += max(0, k-(arr[i]+arr[i-1]));
        arr[i] += max(0, k-(arr[i]+arr[i-1]));
    }
    cout<<ans<<endl;
    for (int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}
```
