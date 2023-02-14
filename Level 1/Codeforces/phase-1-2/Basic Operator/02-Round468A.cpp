#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int m = (a+b)/2;
    int first = abs(a-m);
    int second = abs(b-m);
    cout<<first*(first+1)/2+second*(second+1)/2<<endl;
}
