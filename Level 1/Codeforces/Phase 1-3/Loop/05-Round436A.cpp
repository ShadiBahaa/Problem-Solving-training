#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> mp;
    for (int i = 0; i<n; ++i){
        int x;
        cin>>x;
        mp[x]++;
    }
    if (mp.size()!=2){
        cout<<"NO"<<endl;
        return 0;
    }
    auto it1 = mp.begin();
    auto it2 = mp.begin();
    it2++;
    if ((*it1).second!=n/2 || (*it2).second!=n/2){
        cout<<"NO"<<endl;
    }else {
        cout<<"YES"<<endl;
        cout<<(*it1).first<<" "<<(*it2).first<<endl;
    }
}
