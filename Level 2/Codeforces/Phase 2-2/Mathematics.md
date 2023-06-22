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
