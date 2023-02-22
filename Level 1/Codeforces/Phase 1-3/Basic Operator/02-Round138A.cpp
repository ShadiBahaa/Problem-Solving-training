#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<4*sqrt(a*b/c)+4*sqrt(a*c/b)+4*sqrt(b*c/a)<<endl;
}
