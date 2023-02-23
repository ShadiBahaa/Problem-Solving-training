#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if (s.size()<7){
        cout<<"no"<<endl;
        return 0;
    }
    int cnt = 0;
    bool one = false;
    for (int i = 0; i<s.size(); ++i){
        if (s[i]=='1' && !one){
            one = true;
        }else if (one && s[i]=='0'){
            cnt++;
        }
    }
    if (cnt>=6){
        cout<<"yes"<<endl;
    }else {
        cout<<"no"<<endl;
    }
}
