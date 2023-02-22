#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch = 'r';
    int init = 29;
    int a,b,c;
    cin>>a>>b>>c;
    while (a+b+c>0){
        if (ch=='r'){
            if (a==1)a=0;
            else if (a>=2) a-=2;
            ch = 'g';
        }else if (ch=='g'){
            if (b==1)b=0;
             else if (b>=2) b-=2;
            ch = 'b';
        }else {
            if (c==1)c=0;
             else if (c>=2) c-=2;
            ch = 'r';
        }
        init++;
    }
    cout<<init<<endl;
}
