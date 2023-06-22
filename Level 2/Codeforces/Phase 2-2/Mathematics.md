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
