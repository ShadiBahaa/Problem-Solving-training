#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x,t,a,b,da,db;
    cin>>x>>t>>a>>b>>da>>db;
    for (long long i = 0; i<t; ++i){
        for (long long j = 0; j<t; ++j){
            if ((a-i*da)+(b-j*db)==x || x==0 || a-i*da==x || b-j*db==x){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}

