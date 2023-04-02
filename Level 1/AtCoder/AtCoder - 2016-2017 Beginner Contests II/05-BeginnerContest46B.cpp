#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long ans = k;
    for (long long i = 1; i<n; ++i){
        ans*=(k-1);
    }
    cout<<ans<<endl;
}
