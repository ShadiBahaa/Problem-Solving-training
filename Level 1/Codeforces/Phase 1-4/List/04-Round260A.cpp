#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    vector<pair<int,int>> ans;
    for (int i = 0; i<n ; ++i)
    {
        cin>>a>>b;
        ans.push_back({a,b});
    }
    sort(ans.begin(),ans.end());
    set<int> s;
    s.insert(ans[0].second);
    for (int i = 1; i<ans.size(); ++i){
        auto it = s.lower_bound(ans[i].second);
        if (it!=s.end()){
            if (*it>ans[i].second){
                cout<<"Happy Alex"<<endl;
                return 0;
            }
        }
        s.insert(ans[i].second);
    }
    cout<<"Poor Alex"<<endl;
}
