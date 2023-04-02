#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    a+=b;
    int num = stoi(a);
    int sq = sqrt(num);
    if (sq*sq==num){
        cout<<"Yes"<<endl;
    }else {
        cout<<"No"<<endl;
    }
}
