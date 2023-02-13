#include <bits/stdc++.h>
using namespace std;
int main(){
    long long k,n,w;
    cin>>k>>n>>w;
    long long num = (w*(w+1)/2)*k;
    if (n>=num)cout<<0<<endl;
    else cout<<num-n<<endl;
}
