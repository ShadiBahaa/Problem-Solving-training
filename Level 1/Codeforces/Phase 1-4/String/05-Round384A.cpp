#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    a--;
    b--;
    cout<<((s[a]-'0')^(s[b]-'0'))<<endl;
}
