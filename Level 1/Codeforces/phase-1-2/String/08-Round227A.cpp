#include <bits/stdc++.h>
using namespace std;
int getMin(int first, int second){
    return (first-second+60)%60;
}
int getHour(int first, int second, bool in){
    return (first - second - in +24)%24;
}
int gH(string x){
    if (x[0]=='0'){
        return x[1]-'0';
    }
    return stoi(x.substr(0,2));
}
int gM(string x){
    if (x[3]=='0'){
        return x[4]-'0';
    }
    return stoi(x.substr(3,2));
}
int main(){
    string s,t;
    cin>>s>>t;
    bool neg = (gM(s)-gM(t))<0;
    int dif1 = getMin(gM(s),gM(t));
    int dif2 = getHour(gH(s),gH(t),neg);
    if (dif2<=9){
        cout<<0;
    }
    cout<<dif2<<":";
    if (dif1<=9){
        cout<<0;
    }
    cout<<dif1<<endl;
}
