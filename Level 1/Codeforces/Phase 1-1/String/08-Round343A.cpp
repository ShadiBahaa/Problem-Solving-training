#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    string arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
        int cnt = 0;
        for (int j = 0; j<n; ++j){
            cnt+=(arr[i][j]=='C');
        }
        ans+=cnt*(cnt-1)/2;
    }
    for (int i = 0; i<n; ++i){
        int cnt = 0;
        for (int j = 0; j<n; ++j){
            cnt+=(arr[j][i])=='C';
        }
        ans+=cnt*(cnt-1)/2;
    }
    cout<<ans<<endl;
}
