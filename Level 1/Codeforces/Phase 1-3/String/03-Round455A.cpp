#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    string ans = a+b;
    for (int i = 0; i<a.size(); ++i){
        for (int j = 0; j<b.size(); ++j){
            ans = min(ans,a.substr(0,i+1)+b.substr(0,j+1));
        }
    }
    cout<<ans<<endl;
}
