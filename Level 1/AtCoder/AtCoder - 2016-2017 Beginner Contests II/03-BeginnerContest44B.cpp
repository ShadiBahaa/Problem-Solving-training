#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> mp;
    string c;
    cin>>c;
    for (char s:c){
        mp[s]++;
    }
    for (pair<char,int> it:mp){
        if (it.second%2){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
