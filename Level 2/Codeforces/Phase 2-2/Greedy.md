# Greedy 
## 1- Round 182 B:
Problem link: https://codeforces.com/problemset/problem/302/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (int i = 0; i<n; ++i){
        int c,t;
        cin>>c>>t;
        v[i] = c*t;
        if (i>0)v[i]+=v[i-1];
    }
    while (m--){
        int val;
        cin>>val;
        auto it = lower_bound(v.begin(),v.end(),val);
        cout<<(it-v.begin())+1<<endl;
    }
}
```
## 2- Round 210 B:
Problem link: https://codeforces.com/problemset/problem/361/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if (n==k){
        cout<<-1<<endl;
        return 0;
    }
    int arr[n+5]{};
    for (int i = 1; i<=n; ++i){
        arr[i] = i;
    }
    int bad_len = n - k;
    int total = bad_len%2;
    for (int i = total + 1; i<=n && total < bad_len; i += 2){
        swap(arr[i],arr[i+1]);
        total += 2;
    }
    for (int i = 1; i<=n; ++i){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
```
