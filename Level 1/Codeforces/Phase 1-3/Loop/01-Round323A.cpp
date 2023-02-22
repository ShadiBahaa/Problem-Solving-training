#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 1;
    int n;
    cin>>n;
    n*=n;
    map<int,bool> h;
    map<int,bool> v;
    while (n--){
        int x,y;
        cin>>x>>y;
        if (h[x] || v[y]){
            cnt++;
            continue;
        }else {
            h[x] = true;
            v[y] = true;
            cout<<cnt++<<" ";
        }
    }
    cout<<endl;
}
