# Greedy 
## 1- Round 161 B
Problem link: https://codeforces.com/problemset/problem/263/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i<n; ++i)cin>>arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    if (k>n){
        cout<<-1<<endl;
        return 0;
    }
    cout<<arr[k-1]<<" "<<arr[k-1]<<endl;
}
```
## 2- Round 395 B
Problem link: https://codeforces.com/problemset/problem/764/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n ; ++i)cin>>arr[i];
    for (int i = 0; i<n/2; i+=2){
        swap(arr[i],arr[n-i-1]);
    }
    for (int i:arr)cout<<i<<" ";
    cout<<endl;
}
```
## 3- Round 16 B
Problem link: https://codeforces.com/problemset/problem/16/B
```cpp
#include <bits/stdc++.h>
using namespace std;
bool by(pair<int,int> a, pair<int,int> b){
    return a.second>b.second;
}
int main()
{
    int n,m;
    cin>>n>>m;
    pair<int,int> arr[m];
    for (int i = 0; i<m; ++i){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+m,by);
    int rem = n;
    long long res = 0;
    for (int i = 0; i<m; ++i){
        if (arr[i].first<=rem){
            rem-=arr[i].first;
            res+=(arr[i].first*arr[i].second);
        }else {
            res+=(rem*arr[i].second);
            rem = 0;
            break;
        }
    }
    cout<<res<<endl;
}
```
## 4- Round 34 B
Problem link: https://codeforces.com/problemset/problem/34/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i<n; ++i)cin>>arr[i];
    sort(arr,arr+n);
    int sum = 0;
    for (int i = 0; i<m; ++i){
        if (arr[i]<=0)sum+=arr[i];
        else break;
    }
    cout<<-sum<<endl;
}
```
## 5- Round 491 B
Problem link: https://codeforces.com/problemset/problem/991/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; ++i)cin>>arr[i];
    int sum = accumulate(arr,arr+n,0);
    sort(arr,arr+n);
    int i = 0;
    int ans = 0;
    while (i<n){
        if (int(round(double(sum)/n)) >= 5){
            cout<<ans<<endl;
            return 0;
        }
        if (arr[i]!=5){
            sum+=5-arr[i];
            ans++;
        }
        i++;
    }
    cout<<ans<<endl;
}
```
## 6-	Round 145 B
Problem link: https://codeforces.com/problemset/problem/234/B
```cpp
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> &a, pair<int,int> &b){
    return a.second>b.second;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for (int i = 0; i<n; ++i){
        cin>>v[i].second;
        v[i].first = i+1;
    }
    sort(v.begin(),v.end(),cmp);
    vector<int> ans;
    for (int i = 0; i<k ; ++i){
        if (i==k-1){
            cout<<v[i].second<<endl;
        }
        ans.push_back(v[i].first);
    }
    sort(ans.begin(),ans.end());
    for (auto ind:ans){
        cout<<ind<<" ";
    }
    cout<<endl;
}
```
## 7-	Round 265 B
Problem link: https://codeforces.com/problemset/problem/465/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int> v;
    for (int i = 1; i<=n; ++i){
        cin>>x;
        if (x)v.push_back(i);
    }
    if (v.size()==0){
        cout<<0<<endl;
        return 0;
    }
    int ans = 1;
    for (int i = 1; i<v.size(); ++i){
        if (v[i]-v[i-1]>1){
            ans+=2;
        }else ans++;
    }
    cout<<ans<<endl;
}
```
