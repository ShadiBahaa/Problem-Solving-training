#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    long long can = max(0LL,a-x)/2 + max(0LL,b-y)/2 + max(0LL,c-z)/2;
    long long need = max(0LL,x-a) + max(0LL,y-b) + max(0LL,z-c);
    if (need<=can){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
}
