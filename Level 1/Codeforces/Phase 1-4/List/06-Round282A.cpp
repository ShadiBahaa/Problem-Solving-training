#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,set<int>> mp;
    mp[0] = {0,8};
    mp[1] = {0,3,4,7,8,9,1};
    mp[2] = {8,2};
    mp[3] = {3,8,9};
    mp[4] = {4,8,9};
    mp[5] = {5,6,8,9};
    mp[6] = {6,8};
    mp[7] = {0,3,7,8,9};
    mp[8] = {8};
    mp[9] = {8,9};
    string s;
    cin>>s;
    cout<<mp[s[0]-'0'].size()*mp[s[1]-'0'].size()<<endl;
}
