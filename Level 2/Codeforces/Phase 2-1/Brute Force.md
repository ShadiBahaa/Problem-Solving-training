# Brute Force
## 1- Round 14 B
Problem link: https://codeforces.com/problemset/problem/14/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int start = -1;
    int end = -1;
    int a,b;
    for (int i = 0; i<n; ++i){
        cin>>a>>b;
        if (a>b)swap(a,b);
        if (start==-1 && end==-1)start = a, end = b;
        else {
            start = max(start,a);
            end = min(end,b);
        }
    }
    if (end<start){
        cout<<-1<<endl;
    }else if (x>=start && x<=end){
        cout<<0<<endl;
    }
    else
    {
        cout<<min(abs(x-start),abs(x-end))<<endl;
    }
}
```
## 2- Round 464 B
Problem link: https://codeforces.com/problemset/problem/939/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long lr = LONG_LONG_MAX;
    long long n,k;
    cin>>n>>k;
    long long arr[k];
    for (long long i = 0; i<k; ++i){
        cin>>arr[i];
        lr = min(n%arr[i],lr);
    }
    for (long long i = 0; i<k; ++i){
        if (n%arr[i]==lr){
            cout<<i+1<<" "<<n/arr[i]<<endl;
            break;
        }
    }
}
```
