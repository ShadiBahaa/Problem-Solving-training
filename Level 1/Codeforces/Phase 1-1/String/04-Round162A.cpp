#include <bits/stdc++.h>
using namespace std;
int main(){
int position = 1;
string c,t;
cin>>c>>t;
for (int i = 0; i<t.size(); i++){
    if (t[i]==c[position-1]){
        ++position;
    }
}
cout<<position<<endl;
}
