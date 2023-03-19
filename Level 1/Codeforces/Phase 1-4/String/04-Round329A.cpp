#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int freq[27]{};
    map<char,int> mp1;
    map<pair<char,char>,int> mp2;
    for (int i = 0; i<n; ++i){
        string s;
        cin>>s;
        set<char> ss;
        for (char c:s){
            ss.insert(c);
        }
        if (ss.size()==1){
            mp1[*(ss.begin())]+=s.size();
        }else if (ss.size()==2){
            auto it = ss.begin();
            pair<char,char> pa;
            pa.first = *it;
            it++;
            pa.second = *it;
            mp2[pa]+=s.size();
        }
    }
    int ans = 0;
    for (char i = 'a'; i<='z'; ++i){
        for (char j = i+1; j<='z'; ++j){
            ans = max(ans,mp1[i]+mp1[j]+mp2[{i,j}]);
        }
    }
    cout<<ans<<endl;
}
