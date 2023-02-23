#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0,r=s.size()-1;
    int cnt = 0;
    while (l<=r){
        if (s[l]!=s[r]){
            cnt++;
        }
        l++;
        r--;
    }
    cout<<((cnt==1 || (cnt==0 && s.size()%2))?"YES":"NO")<<endl;
}
