#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    k*=2;
    map<char,int> mp;
    for (int i = 0; i<4; ++i){
        string c;
        cin>>c;
        for (char s:c){
            if (s=='.')continue;
            mp[s]++;
        }
    }
    for (pair<char,int> p:mp){
        if (p.second>k){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
