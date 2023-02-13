#include <bits/stdc++.h>
using namespace std;
int main(){
    long long s[5]{};
    int cnt=0;
    for (int i = 0; i<4; i++){
        cin>>s[i];
    }
    sort (s,s+4);
    for (int i = 1; i<4; i++){
        if (s[i]==s[i-1]){
            ++cnt;
        }
    }
    cout<<cnt<<endl;
}
