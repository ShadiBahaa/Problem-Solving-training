#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<char> s;
    for (int i = 0; i<n; ++i){
        char x;
        cin>>x;
        s.insert(x);
    }
    if (s.size()==3){
        cout<<"Three"<<endl;
    }else {
        cout<<"Four"<<endl;
    }
}
