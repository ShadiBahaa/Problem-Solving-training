#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d=0,a=0,f=0;
    char c;
    cin>>n;
    for (int i = 0; i<n; i++){
        cin>>c;
        if (c=='D'){
            d++;
        }else if (c=='A'){
            a++;
        }
    }
    if (d == a){
        cout<<"Friendship"<<endl;
    }else if (d>a){
        cout<<"Danik"<<endl;
    }else if (a>d){
        cout<<"Anton"<<endl;
    }
}
