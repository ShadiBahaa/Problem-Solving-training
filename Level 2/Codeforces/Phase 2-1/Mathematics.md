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
## 4- Round 164 B
Problem link: https://codeforces.com/problemset/problem/268/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    cout<<n*n*(n-1)/2 - (n-1)*n*(2*n-1)/6 + n<<endl;
}
```
## 5- Round 255 B
Problem link: https://codeforces.com/problemset/problem/447/B
```cpp
#include <bits/stdc++.h>
using namespace std;
bool by (pair<char,int> &a, pair<char,int> &b){
    return a.second>b.second;
}
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    vector<pair<char,int>> v(26);
    for (int i = 0; i<26; ++i){
        cin>>v[i].second;
        v[i].first = 'a' + i;
    }
    vector<pair<char,int>> v2 = v;
    sort(v.begin(),v.end(),by);
    int i = 1;
    int ans = 0;
    while (k--){
        ans += v[0].second*(k+s.size()+1);
    }
    for (char c:s){
        ans += v2[c-'a'].second*i;
        i++;
    }
    cout<<ans<<endl;
}
```
