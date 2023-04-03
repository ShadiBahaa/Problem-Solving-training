#include <bits/stdc++.h>
using namespace std;
bool pal(string a){
    string c = a;
    reverse(c.begin(),c.end());
    return c==a;
}
int main(){
    int a,b;
    cin>>a>>b;
    int cnt = 0;
    for (int i = a; i<=b ;++i){
        if (pal(to_string(i)))cnt++;
    }
    cout<<cnt<<endl;
}
