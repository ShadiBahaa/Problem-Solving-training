#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    for (int i = 0; i<n ;++i){
        cin>>x;
        if (x%2==0){
            if (x%3!=0 && x%5!=0){
                cout<<"DENIED"<<endl;
                return 0;
            }
        }
    }
    cout<<"APPROVED"<<endl;
}
