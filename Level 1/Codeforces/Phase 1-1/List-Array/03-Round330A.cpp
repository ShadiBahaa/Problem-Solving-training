#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cur = 0;
    int ans = 0;
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<2*m; ++j){
            int x;
            cin>>x;
            cur+=x;
            if (j%2 && cur!=0){
                ans++;
                cur = 0;
            }
        }
    }
    cout<<ans<<endl;
}
