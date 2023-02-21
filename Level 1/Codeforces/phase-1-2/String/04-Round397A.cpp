#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,int> mp;
    int n;
    cin>>n;
    string home;
    cin>>home;
    while (n--){
        string s;
        cin>>s;
        string first = s.substr(0,3);
        string second = s.substr(5,3);
        if (first>second)swap(first,second);
        mp[{first,second}]++;
    }
    for (auto it = mp.begin();it != mp.end(); ++it){
        if (!((it->second%2==0) && ((it->first).first==home || (it->first).second==home ))){
            cout<<"contest"<<endl;
            return 0;
        }
    }
    cout<<"home"<<endl;
}
