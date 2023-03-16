#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long n;
    cin>>n;
    int cnt = 0;
    for (long long a = 1; a<=n; ++a){
        for (long long b = a+1; b<=n; ++b){
            long long cc = (a*a + b*b);
            long long c = 0;
            if (cc>=0)c = sqrt(cc);
            if (c*c==cc && c<=n && c>=1){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
