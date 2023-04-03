#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int ans = 0;
    for (int i = 0; i<n-2 ;++i){
        string cur = s.substr(i,3);
        if (cur=="ABC")ans++;
    }
    cout<<ans<<endl;
}
