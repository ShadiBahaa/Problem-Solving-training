#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int n;
    cin>>n;
    int ans = 0;
    for (int i = 0; i<n; ++i){
        int x;
        cin>>x;
        if (x>b && x<c)ans++;
    }
    cout<<ans<<endl;
}
