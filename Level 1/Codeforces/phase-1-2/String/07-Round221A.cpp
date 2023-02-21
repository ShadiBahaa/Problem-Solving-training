#include <bits/stdc++.h>
using namespace std;
int main(){
    long long right = 0,left = 0;
    string s;
    cin>>s;
    bool stop = false;
    int cnt = s.find('^');
    for (char c:s){
        if (c=='^'){stop = true;cnt=1;continue;}
        else if (stop && c!='='){right+=(c-'0')*cnt;}
        else if (c!='=') {left+=(c-'0')*cnt;}
        if (stop)cnt++;
        else cnt--;
    }
    if (right==left){
        cout<<"balance"<<endl;
    }else if (right>left){
        cout<<"right"<<endl;
    }else {
        cout<<"left"<<endl;
    }
}
