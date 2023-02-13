#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string odd = "hate";
    string even = "love";
    cout<<"I ";
    for (int i = 1; i<=n; ++i){
        if (i%2){
            cout<<odd<<" ";
        }else {
            cout<<even<<" ";
        }
        if (i==n)cout<<"it";
        else cout<<"that I ";
    }
    cout<<endl;
}
