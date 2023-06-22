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
