#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    bool odd = true;
    char arr[n+1][n+1];
    for (int i = 1; i<=n; ++i){
        for (int j = 1; j<=n; ++j){
            if (odd && j%2){
                arr[i][j] = 'C';
                ans++;
            }else if (!odd && j%2==0){
                arr[i][j] = 'C';
                ans++;
            }else {
                arr[i][j] = '.';
            }
        }
        odd = !odd;
    }
    cout<<ans<<endl;
    for (int i = 1; i<=n; ++i){
        for (int j = 1; j<=n; ++j){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
