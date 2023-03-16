#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long y,k,n;
    cin>>y>>k>>n;
    long long x = k - y%k;
    bool ok = false;
    while ((x+y)%k==0 && (x+y)<=n){
        cout<<x<<" ";
        ok = true;
        x+=k;
    }
    if (!ok)cout<<-1;
    cout<<endl;
}
