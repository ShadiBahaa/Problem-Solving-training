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
## 3- Round 215 B
Problem link: https://codeforces.com/problemset/problem/368/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int ans[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    set<int> s;
    for (int i = n-1; i>=0 ; --i){
        s.insert(arr[i]);
        ans[i] = s.size();
    }
    while (m--){
        int x;
        cin>>x;
        cout<<ans[x-1]<<endl;
    }
}
```
## 4-	Round 367 B
Problem link: https://codeforces.com/problemset/problem/706/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0 ; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int q;
    cin>>q;
    sort(arr.begin(),arr.end());
    while (q--){
        int i;
        cin>>i;
        auto it = upper_bound(arr.begin(),arr.end(),i);
        if (it == arr.end()){
            cout<<arr.size()<<endl;
        }else {
            cout<<it-arr.begin()<<endl;
        }
    }
}
```
## 5-	Round 211 B
Problem link: https://codeforces.com/problemset/problem/363/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    int first = 0;
    long long minsum = 0;
    for (int i = 0; i<k; ++i){
        minsum+=arr[i];
    }
    //cout<<sum<<endl;
    int index = 1;
    long long sum = minsum;
    for (int i = k; i<n; ++i){
        long long cursum = sum - arr[first]+arr[i];
        ++first;
        //cout<<cursum<<" ";
        if (cursum<minsum){
            index = first+1;
            minsum = cursum;
        }
        //cout<<index<<endl;
        sum = cursum;
    }
    cout<<index<<endl;
}
```
