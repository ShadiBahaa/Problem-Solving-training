#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,char> mp;
    string first,second;
    cin>>first>>second;
    for (int i = 0; i<26; ++i){
        mp[first[i]] = second[i];
    }
    string l;
    cin>>l;
    for (char x:l){
        if (x>='a' && x<='z'){
            cout<<mp[x];
        }else if (x>='0' && x<='9'){
            cout<<x;
        }else {
            cout<<(char)((mp[(x-'A')+'a']-'a')+'A');
        }
    }
    cout<<endl;
}
