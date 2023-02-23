#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int res1 = stoi(s)+stoi(t);
    string news,newt;
    string re1 = to_string(res1);
    re1.erase(remove(re1.begin(),re1.end(),'0'),re1.end());
    s.erase(remove(s.begin(),s.end(),'0'),s.end());
    t.erase(remove(t.begin(),t.end(),'0'),t.end());
    int res2 = stoi(s)+stoi(t);
    if (to_string(res2)==re1){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}
