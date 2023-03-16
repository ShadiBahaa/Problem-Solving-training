#include <bits/stdc++.h>
using namespace std;
int main(){
    string c;
    cin>>c;
    string tmp = c;
    set <int> zeros;
    if (c[0]!='9' && c[0]>='5'){
        c[0]=('9'-c[0])+'0';
    }
    for (int i = 1; i<c.size();i++){
        if (c[i]>='5'){
            c[i]=('9'-c[i])+'0';
        }
    }
    if (c[0]=='0'){
        zeros.insert(0);
        for (int i = 1; i<c.size();i++){
            if (c[i]=='0' && zeros.count(i-1)){
                zeros.insert(i);
            }else {
                break;
            }
        }
    }
    bool found = false;
    int tar = -1;
    if (c.size()==zeros.size()){
        for (int i = 0; i<tmp.size();i++){
            if (tmp[i]!='0' ){
                tar = i;
                found = true;
                cout<<tmp[i];
                break;
            }
        }
        if (!found){
            cout<<9;
            tar++;
        }

        for (int i=tar+1; i<c.size();i++){
            cout<<c[i];
        }
        cout<<endl;
        return 0;
    }
    for (int i = 0; i<c.size();i++){
        if (!zeros.count(i)){
            cout<<c[i];
        }
    }
    cout<<endl;
}
