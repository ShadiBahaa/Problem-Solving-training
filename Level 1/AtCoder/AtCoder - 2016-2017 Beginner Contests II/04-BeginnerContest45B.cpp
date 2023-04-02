#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<queue<char>> v(3);
    for (int i = 0; i<3; ++i){
        string c;
        cin>>c;
        for (char s:c){
            v[i].push(s);
        }
    }
    int i = 0;
    while (true){
        if (v[i].size()==0){
            if (i==0){
                cout<<"A"<<endl;
            }else if (i==1){
                cout<<"B"<<endl;
            }else {
                cout<<"C"<<endl;
            }
            return 0;
        }
        char cur = v[i].front();
        v[i].pop();
        if (cur=='a'){
            i = 0;
        }else if (cur=='b')i=1;
        else i = 2;
    }
}
