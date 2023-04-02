#include <bits/stdc++.h>
using namespace std;
int main(){
    string c;
    cin>>c;
    stack<char> s;
    for (int i = 0; i<c.size(); ++i){
        if (c[i]=='B'){
            if (s.size()){
                s.pop();
            }
        }else {
            s.push(c[i]);
        }
    }
    string ans;
    while (s.size()){
        ans+=(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
