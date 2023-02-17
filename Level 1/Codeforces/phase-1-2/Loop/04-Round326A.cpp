#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans = 0;
    int n;
    cin>>n;
    n--;
    int a,b;
    cin>>a>>b;
    ans+=a*b;
    int prev = b;
    while (n--){
        cin>>a>>b;
        if (b>prev){
            ans+=a*prev;
        }else {
            ans+=a*b;
            prev = b;
        }
    }
    cout<<ans<<endl;
}
