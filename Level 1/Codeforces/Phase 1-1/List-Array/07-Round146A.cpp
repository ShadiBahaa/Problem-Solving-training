#include <bits/stdc++.h>
using namespace std;
int main(){
    string c;
    int cnt = 1;
    cin>>c;
    sort (c.begin(),c.end());
    for (int i = 1; i<c.size();i++){
        if (c[i]!=c[i-1]){
            ++cnt;
        }
    }
    if (cnt%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else {
        cout<<"IGNORE HIM!"<<endl;
    }
}
