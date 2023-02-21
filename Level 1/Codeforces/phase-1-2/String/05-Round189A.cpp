#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if (s.size()==1){
        if (s[0]!='1'){
            cout<<"NO"<<endl;
        }else {
            cout<<"YES"<<endl;
        }
        return 0;
    }
    if (s[0]!='1'){
        cout<<"NO"<<endl;
        return 0;
    }
    if (s[1]!='1' && s[1]!='4'){
        cout<<"NO"<<endl;
        return 0;
    }
    for (int i =2 ; i<(int)s.size(); ++i){
        if (s[i]=='1' || (s[i]=='4' && s[i-1]=='1') || (s[i]=='4' && s[i-1]=='4' && s[i-2]=='1')){
        }else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
