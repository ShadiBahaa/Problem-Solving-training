#include <bits/stdc++.h>
using namespace std;
int main(){
    int freq[27]{},cnt = 0;
    char c;
    while (cin>>c && c!='}'){
        if (c>= 'a' && c<= 'z'){
            freq[c-'a']++;
        }
    }
    for (int i = 0; i<27; i++){
        if (freq[i]>0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
