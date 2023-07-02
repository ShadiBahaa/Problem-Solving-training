# Mathematics 
## 1- Round 118 B:
Problem link: https://codeforces.com/problemset/problem/186/B
```cpp
#include <bits/stdc++.h>
using namespace std;
bool by(pair<int,double> &a, pair<int,double> &b)
{
    if (fabs(a.second-b.second)>1e-6)
    {
        return a.second>b.second;
    }
    return a.first<b.first;
}
int main()
{
    int n,t1,t2,k;
    cin>>n>>t1>>t2>>k;
    int cnt = 1;
    vector<pair<int,double>> ans;
    while (n--)
    {
        int first,second;
        cin>>first>>second;
        ans.push_back({cnt,max((double(first*t1)-(double(k)/100)*double(first*t1))+double(second*t2),(double(second*t1)-(double(k)/100)*double(second*t1))+double(first*t2))});
        //cout<<cnt<<" "<<fixed<<setprecision(2)<<double(first*t1)-(double(k)/100)*(first*t1)+second*t2<<endl;
        cnt++;
    }
    if (ans.size()==1)
    {
        cout<<ans[0].first<<" "<<fixed<<setprecision(2)<<ans[0].second<<endl;
    }
    else
    {
        sort(ans.begin(),ans.end(),by);
        for (auto i:ans)
        {
            cout<<i.first<<" "<<fixed<<setprecision(2)<<i.second<<endl;
        }
    }
}
```
## 2- Round 235 B:
Problem link: https://codeforces.com/problemset/problem/401/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int x,k;
    cin>>x>>k;
    for (int i = 1; i<x; ++i)s.insert(i);
    while(k--){
        int type;
        cin>>type;
        if (type==1){
            int num2,num1;
            cin>>num2>>num1;
            s.erase(num2);
            s.erase(num1);
        }else {
            int num2;
            cin>>num2;
            s.erase(num2);
        }
    }
    int maxi = s.size();
    int mini = 0;
    auto it = s.begin();
    while (it!=s.end()){
        int val = *it;
        auto it2 = s.lower_bound(val+1);
        if (it2!=s.end() && *it2==*it+1){
            s.erase(it2);
            it = s.erase(it);
        }else {
            it++;
        }
        mini++;
    }
    cout<<mini<<" "<<maxi<<endl;
}
```
## 3- Round 242 B:
Problem link: https://codeforces.com/problemset/problem/424/B
```cpp
#include <bits/stdc++.h>
using namespace std;
bool by(vector<int> a, vector<int> b){
    return (a[0]*a[0] + a[1]*a[1]) < (b[0]*b[0] + b[1]*b[1]) ;
}
int main()
{
    int n,s;
    cin>>n>>s;
    vector<vector<int>> v (n,vector<int>(3));
    for (int i = 0; i<n; ++i){
        int x,y,k;
        cin>>x>>y>>k;
        v[i]={abs(x),abs(y),k};
    }
    sort(v.begin(), v.end(), by);
    int need = 1000000 - s;
    int sum = 0;
    for (int i = 0; i<v.size(); ++i){
        sum += v[i][2];
        if (sum >= need){
            cout<<fixed<<setprecision(7)<<sqrt(v[i][0]*v[i][0] + v[i][1]*v[i][1])<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
```
## 4- Round 247 B:
Problem link: https://codeforces.com/problemset/problem/431/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[5][5];
    for (int i = 0; i<5; ++i){
        for (int j = 0; j<5; ++j){
            cin>>v[i][j];
        }
    }
    int ans = 0;
    vector<int> arr {0,1,2,3,4};
    do {
            int tmp = 0;
            tmp+= v[arr[0]][arr[1]] + v[arr[1]][arr[0]] + v[arr[2]][arr[3]] + v[arr[3]][arr[2]];
            tmp+= v[arr[1]][arr[2]] + v[arr[2]][arr[1]] + v[arr[3]][arr[4]] + v[arr[4]][arr[3]];
            tmp+= v[arr[2]][arr[3]] + v[arr[3]][arr[2]];
            tmp+= v[arr[3]][arr[4]] + v[arr[4]][arr[3]];
            ans = max(ans,tmp);

    }while (next_permutation(arr.begin(),arr.end()));
    cout<<ans<<endl;
}
```
## 5- Round 260 B:
Problem link: https://codeforces.com/problemset/problem/456/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int var;
    if (s.size()==1)var = s.size()-1;
    else var = s.size()-2;
    int n = stoi(s.substr(var));
    if (n%4){
        cout<<0<<endl;
    }else {
        cout<<4<<endl;
    }
}
```
## 6- Round 280 B:
Problem link: https://codeforces.com/problemset/problem/492/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    int arr[n]{};
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long sum = 0;
    priority_queue<int> q;
    for (int i =1; i<n; ++i){
        q.push(arr[i]-arr[i-1]);
    }
    double mini = max(*min_element(arr,arr+n),l-*max_element(arr,arr+n));
    if (q.size()&&((double)q.top()/2.0-mini)>=1e-9){
        cout<<fixed<<setprecision(10)<<(double)q.top()/2.0<<endl;
    }else {
        cout<<fixed<<setprecision(10)<<mini<<endl;
    }
}
```
## 7- Round 381 B:
Problem link: https://codeforces.com/problemset/problem/740/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n]{};
    vector<int> v;
    for (int i = 0; i<n; ++i)
    {
        cin>>arr[i] ;
        if (i>0) arr[i]+=arr[i-1];
    }
    while (m--)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        int tmp = arr[r];
        if (l>0) tmp-=arr[l-1];
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),greater<int>());
    int ans = 0;
    for (int num:v)
    {
        if (num<=0)break;
        ans += num;
    }
    cout<<ans<<endl;
}
```
## 8- Round 384 B:
Problem link: https://codeforces.com/problemset/problem/743/B
```cpp
#include <bits/stdc++.h>
using namespace std;
long long srch(long long l, long long r, long long index, long long res){
    long long mid = l+(r-l)/2;
    if (index > mid){
        return srch(mid+1,r,index,res-1);
    }else if (index < mid){
        return srch(l,mid-1,index,res-1);
    }else {
        return res;
    }
}
int main()
{
    long long n,k;
    cin>>n>>k;
    long long sz = (long long)pow(2,n) -1 ;
    cout<<srch(1,sz,k,n);
}
```
## 9- Round 400 B:
Problem link: https://codeforces.com/problemset/problem/776/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<bool> prime(n+5,true);
    prime[0] = prime[1] = false;
    vector<int> color(n+5);
    int cur = 1;
    for (long long i = 2 ; i<=(n+1); ++i){
        if (prime[i]){
            color[i-1] = cur;
            cur++;
            for (long long j = i*i; j<=(n+1);j+=i){
                prime[j] = false;
                color[j-1] = cur;
            }
            cur = 1;
        }
    }
    if (n<=2)cout<<1<<endl;
    else cout<<2<<endl;
    for (int i = 1; i<=n; ++i){
        cout<<color[i]<<" ";
    }
    cout<<endl;
}
```
