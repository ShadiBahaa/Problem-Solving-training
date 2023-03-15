#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    long long ans = 1e18;
    for (long long i = 0; i<100; ++i){
        for (long long j = 0; j<100; ++j){
            for (long long k = 0; k<100; ++k){
                if ((n+i+2*j+3*k)%4==0){
                    ans = min(ans,a*i+b*j+c*k);
                }
            }
        }
    }
    cout<<ans<<endl;
}
 
