#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<m; ++j){
            char x;
            cin>>x;
            if (x=='.'){
                if ((i+j)&1)cout<<'B';else cout<<'W';
            }else {
                cout<<x;
            }
        }
        cout<<endl;
    }
}
