#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ans = 0;
    while (true){
        if (n==0){
            break;
        }
        ans++;
        n/=k;
    }
    cout<<ans<<endl;
}
