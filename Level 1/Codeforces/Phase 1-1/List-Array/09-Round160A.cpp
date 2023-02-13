#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = 0;
    for (int i = 0; i<n; ++i){
        string s;
        cin>>s;
        int cnt = 0;
        for (char x:s){
            if (x=='4' || x=='7')cnt++;
        }
        if (cnt<=k)ans++;
    }
    cout<<ans<<endl;
}
