# Mathematics
## 1- Round 379 B
Problem link: https://codeforces.com/problemset/problem/734/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int mini = min(k2,min(k5,k6));
    int ans = mini*256;
    k2-=mini;
    ans+= min(k2,k3)*32;
    cout<<ans<<endl;
}
```
## 2- Round 126 B
Problem link: https://codeforces.com/problemset/problem/200/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 0; i<n; ++i){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<fixed<<setprecision(12)<<double(sum)/n<<endl;
}
```
## 3- Round 162 B
Problem link: https://codeforces.com/problemset/problem/265/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n;
    int ans = 0;
    int arr[n];
    for (int i = 0; i<n; ++i)cin>>arr[i];
    int pos = arr[0];
    ans = arr[0] + 1;
    for (int i = 1; i<n; ++i){
        ans += abs(pos-arr[i])+2;
        pos = arr[i];
    }
    cout<<ans<<endl;
}
```
