#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if (s[0]!='-')cout<<s<<endl;
    else {
        if (s[2]=='0' && s.size()==3){
            cout<<0<<endl;
            return 0;
        }
        char first = s[(int)s.size()-2];
        char second = s[(int)s.size()-1];
        if (first>second){
            s[(int)s.size()-2] = ' ';
        }else {
            s[(int)s.size()-1] = ' ';
        }
        for (char x:s){
            if (x!=' ')cout<<x;
        }
        cout<<endl;
    }
}
