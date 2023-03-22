#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<string> v;
    for (int i = 0; i<s.size(); ++i){
        string tmp;
        for (int j = i; j<s.size(); ++j){
            tmp+=s[j];
            v.push_back(tmp);
        }
    }
    int ans = 0;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for (int i = 1; i<v.size(); ++i){
        if (v[i]==v[i-1]){
            ans = max(ans,(int)v[i].size());
        }
    }
    cout<<ans<<endl;
}
