#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long evpo = ((n+1)/2)+1;
    long long odpo = 1;
    if (k>=1 && k<evpo){
        cout<<1+(k-odpo)*2<<endl;
    }else {
        cout<<2+(k-evpo)*2<<endl;
    }
}
