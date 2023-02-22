#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt = 0;
    while (n--){
        string c;
        cin>>c;
        if (c=="Tetrahedron"){
            cnt+=4;
        }else if (c=="Cube"){
            cnt+=6;
        }else if (c=="Octahedron"){
            cnt+=8;
        }else if (c=="Dodecahedron"){
            cnt+=12;
        }else if (c=="Icosahedron"){
            cnt+=20;
        }
    }
    cout<<cnt<<endl;

}
