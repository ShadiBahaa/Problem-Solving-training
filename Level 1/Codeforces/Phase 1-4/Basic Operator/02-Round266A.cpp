#include <bits/stdc++.h>
using namespace std;
int n,m,x;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<min(n*a,n/m*b)+min((n%m)*a,b)<<endl;;
}
