#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i = 0;
    while (i<s.size() && s[i]=='1')i++;
    if (i<s.size() && s[i]=='0')i++;
    cout<<i<<endl;
}
