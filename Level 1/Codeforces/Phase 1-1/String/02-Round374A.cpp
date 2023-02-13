#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int cur = s[0]=='B';
    vector<int> v;
    for (int i = 1; i<(int)s.size(); ++i){
        if (s[i]=='B')cur++;
        else if (s[i]=='W'){
           if (cur!=0){
            v.push_back(cur);
            cur = 0;
           }
        }
    }
    if (cur!=0)v.push_back(cur);
    cout<<v.size()<<endl;
    if (v.size()){
        for (int x:v)cout<<x<<" ";
        cout<<endl;
    }
}
