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
