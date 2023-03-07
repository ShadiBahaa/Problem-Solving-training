#include <bits/stdc++.h>
using namespace std;
int n,m,x;
int main(){
    int k,a,b,v;
    cin>>k>>a>>b>>v;
    for (int i = 1; i<=1000; ++i){
        int boxes = i;
        int sections = k*boxes;
        sections = min(sections,b+boxes);
        if (sections*v>=a){
            cout<<i<<endl;
            return 0;
        }
    }
}
