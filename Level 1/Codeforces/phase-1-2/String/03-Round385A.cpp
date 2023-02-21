#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<string> ss;
    ss.insert(s);
    int cnt = (int)s.size()-1;
    while (cnt>-1){
        string tmp = s.substr(cnt);
        tmp+=s.substr(0,cnt);
        ss.insert(tmp);
        cnt--;
    }
    cout<<ss.size()<<endl;
}
