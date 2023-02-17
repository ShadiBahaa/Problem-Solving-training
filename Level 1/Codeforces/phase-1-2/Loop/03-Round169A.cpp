#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans = INT_MIN;
    int n,k;
    cin>>n>>k;
    while (n--){
        int f,t;
        cin>>f>>t;
        if (t>k){
            ans = max(ans,f-(t-k));
        }else {
            ans = max(ans,f);
        }
    }
    cout<<ans<<endl;
}
